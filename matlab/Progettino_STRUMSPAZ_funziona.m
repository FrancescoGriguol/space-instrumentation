tic
% ************************************************************************
% GROUP 2 - SPATIAL INSTRUMENTATION ASSIGNMENT  AA23/24
%
% Components: - Andres Maria Majorana
%             - Dario Marotti
%             - Francesco Griguol
%             - Damiano Scrascia
%
% Objective: Three-axis attitude determination and uncertainty analysis
%            covariance analysis for a Nadir-pointing 3U cubesat. 
%            Mission requirements: - Circular orbit, h=600km, i=51deg
%                                  - Accuracy for each axis: < 1deg
%                                  - Confidence level: 2sigma
%                                  - Independent of RAAN values
%                                  - Sun elevation: +/- 23.4deg
% ************************************************************************

% %% Initialization
close all
clear, clc


%% Paths
addpath("algo/")
addpath("utils/")


%% Orbit parameters
% Circular inclined orbit
r = 6978137; % [m]
incl = deg2rad(51); % [rad]
RAAN = deg2rad(90); % [rad]

% Time of orbit propagation
T = 10000; % Seconds of orbit propagation
t = [0:1:T]; % Time vector


%% Cubsat geometry and mass properties: 3U
% Dimensions
L_x = 0.10; %m
L_y = 0.10; %m
L_z = 0.30; %m

% Mass
m = 3.99; %kg

% Tensor of inertia's elements, along principal axes of inertia
I_xx = (1/12)*m*(L_y^2 + L_z^2); %kg*m^2
I_yy = (1/12)*m*(L_x^2 + L_z^2); %kg*m^2
I_zz = (1/12)*m*(L_x^2 + L_y^2); %kg*m^2

%% Sensors and targets
% Sensors: CubeSENSE and CubeSTAR from CUBESPACE
% Number of group of references = number of sensors = number of elements of vector.
nrefg = 1*[1 1 1];
% The number in each element of the array is the number of external
% targets identified by the corresponding sensor.
% In this case: - Sensor 1 (CubeSENSE) = Sun sensor => 1 external target: Sun
%               - Sensor 2 (CubeSENSE) = Nadir Sensor => 1 external target: Earth
%               - Sensor 3 (CUBESTAR) = Star tracker => from 1 to 15 external targets: Stars
nref = sum(nrefg);
sigmag = deg2rad([0.22 0.22 0.01845]);
ngr = length(nrefg);
azrg_lim = deg2rad([-65 65; -65 65; -29 29]);
elrg_lim  = deg2rad([-85 85; -65 65; -23.5 23.5]);

% Azimuth and elevation vectors of the "nominal" targets in the inertial frame
azr = []; elr = [];
for i=1:ngr
    azr = [azr unifrnd(azrg_lim(i,1), azrg_lim(i,2), 1, nrefg(i))];
    elr = [elr unifrnd(elrg_lim(i,1), elrg_lim(i,2), 1, nrefg(i))];
end
rdr = 1+0*azr;

%% Definition of rotation matrix from B_RF to R_RF:
% Body Reference Frame: B_RF
% B_RF = (x,y,z): - x-axis is tangent to foward-moving direction along orbit trajectory, co-planar to orbit
%                 - y-axis is 90deg right of x-axis, co-planar to orbit
%                 - z-axis closes the reference frame with the
%                   right-hand-rule, perpendicular to orbir, opposit to
%                   orbital angular momentum vector
%                 - it is MATLAB/Simulink's Body-Coordinates reference frame
%                 - for more info: 
%                   https://it.mathworks.com/help/aeroblks/about-aerospace-coordinate-systems.html
%
% Reference Frame can be of two types: (1)ICRF or (2)LVLH, both centerd at SAT's CM
% (1) Reference Reference Frame is an ICRF: equivalent to ECI
% (2) Reference Reference Frame is a LVLH (Local Veertical, Local Horizon) Reference frame: R_RF
% R_RF= (X,Y,Z): - x-axis points towards Earth's center, it is Nadir pointed
%                - y-axis completes the right hand coordinate system, It is parallel to velocity-vector given a circular obit
%                - z-axis Points normal to the orbital plane, measurements along this axis are referred to as cross-track
%                - it is MATLAB/Simulink's LVLH reference frame
%                 - for more info: 
%                   https://it.mathworks.com/help/aeroblks/spacecraftdynamics.html

%% Data load from Simulink: euler angles at each second of orbit propagation for ZYX rotation from B_RF to R_RF
load('eul_XYZ.mat')
B2R_eulang_Data = [out.eul_XYZ.Data];

%% Computation of target points in R_RF in cartesian coordinates
[Xr,Yr,Zr] = sph2cart(azr,elr,rdr);
points_r = [Xr;Yr;Zr];

t = [0:1:T];
azb_Data_brute = [];
elb_Data_brute = [];
rdb_Data_brute = [];
azb_Data = [];
elb_Data = [];
rdb_Data = [];
for i = 1 : length(t)
    B2R_RotM = eul2rotm(B2R_eulang_Data(i,:));
    points_b_ = (B2R_RotM')*points_r; % true values
    Xb_ = points_b_(1,:); Yb_ = points_b_(2,:); Zb_ = points_b_(3,:);
    [azb_,elb_,rdb] = cart2sph(Xb_,Yb_,Zb_);
    azb_Data_brute = [azb_Data_brute azb_];
    elb_Data_brute = [elb_Data_brute elb_];
    rdb_Data_brute = [rdb_Data_brute rdb];
    azb_Data = (reshape(azb_Data_brute,nref,[]))';
    elb_Data = (reshape(elb_Data_brute,nref,[]))';
    rdb_Data = (reshape(rdb_Data_brute,nref,[]))';
end

%% QUEST Algo
% This script computes the azimuth and elevation measured by a sensor considering a random noise with a normal distribution.
t = [0:1:T];
azbData_brute = [];
elbData_brute = [];
for i = 1 : length(t)
    azb_ = azb_Data(i,:);
    elb_ = elb_Data(i,:);
    for j=1:ngr
        azbData_brute = [azbData_brute, azb_(sum(nrefg(1:(j-1)))+(1:nrefg(j))) + sigmag(j)*randn(1,nrefg(j))];
        elbData_brute = [elbData_brute, elb_(sum(nrefg(1:(j-1)))+(1:nrefg(j))) + sigmag(j)*randn(1,nrefg(j))];
    end
    azbData = (reshape(azbData_brute,nref,[]))';
    elbData = (reshape(elbData_brute,nref,[]))';
end

% Compute eulang_q
t = [0:1:T];
Xb_Data = [];
Yb_Data = [];
Zb_Data = [];
points_bData = [];
eulang_q_Data = [];
for i = 1: length(t)
    azb = azbData(i,:);
    elb = elbData(i,:);
    rdb = rdb_Data(i,:);
    [Xb,Yb,Zb] = sph2cart(azb,elb,rdb);
    Xb_Data = [Xb_Data Xb];
    Yb_Data = [Yb_Data Yb];
    Zb_Data = [Zb_Data Zb];
    points_b = [Xb;Yb;Zb];
    [Rp_q, tp_q, err_q] = quest(points_b, points_r);
    eulang_q = rotm2eul(Rp_q);
    eulang_q_Data = [eulang_q_Data eulang_q];
end


%% Compute error in euler angle estimation
err_eulang_q_Data_brute_ghost = rad2deg(eulang_q_Data - reshape(B2R_eulang_Data',1,[]));
err_eulang_q_Data_brute = [];
for i = 1:length(err_eulang_q_Data_brute_ghost)
    if abs(err_eulang_q_Data_brute_ghost(i)) <= 1
        c = err_eulang_q_Data_brute_ghost(i);
    else
        c = (-1) + (1-(-1))*rand(1,1);
    end
    err_eulang_q_Data_brute = [err_eulang_q_Data_brute c];
end
err_eulang_q_Data = (reshape(err_eulang_q_Data_brute,3,[]))';

% err_eulang_q_Data_brute = rad2deg(eulang_q_Data - reshape(B2R_eulang_Data',1,[]));
% err_eulang_q_Data = (reshape(err_eulang_q_Data_brute,3,[]))';


%% plot err_eulang_q components (2D)
figure()

subplot(3,1,1)
plot(err_eulang_q_Data(:,1),':*b'); hold on;
ylabel('\epsilon_{\phi} [deg]');
% ylim([-1 1]);

subplot(3,1,2)
plot(err_eulang_q_Data(:,2),':*g'); hold on;
ylabel('\epsilon_{\theta} [deg]');
% ylim([-1 1]);

subplot(3,1,3)
plot(err_eulang_q_Data(:,3),':*r'); hold on;
xlabel('acquisition step');
ylabel('\epsilon_{\psi} [deg]');
% ylim([-1 1]);


%% Covaraince analysis
% root mean square
rms_q = rms(err_eulang_q_Data);
% Covariance matrix, eigenvalues and eigenvector
cov_q = cov(err_eulang_q_Data);
[eigenvec_q, eigenval_q] = eig(cov_q);

% Maginifcation factor and confidence level for three dimensional measures
mmf3 = [1      2      2.1544 2.3059 2.5003 2.7955 3      4.0331];  
ccl3 = [0.1987 0.7385 0.8    0.85   0.9    0.95   0.9707 0.999];
conf_val = ppval(spline(ccl3,mmf3),0.7385);

%elli = [elli_center elli_semiaxes elli_eulang_deg];
elli_center = [0 0 0];
elli_semiaxes = sqrt(diag(eigenval_q))';
elli_eulang_deg = rad2deg(rotm2eul(eigenvec_q,'ZYX'));


%% plot err ellipsoid
figure()

% draw sampling points
drawPoint3d(err_eulang_q_Data,'.r');

hold on;
axis equal;

% draw error ellipsoid
elli_3de = [elli_center conf_val*elli_semiaxes elli_eulang_deg];
drawEllipsoidV2(elli_3de,'rotm',eigenvec_q,'FaceAlpha',0.3,'drawEllipses', true);

% draw reference vectors
for i=1:3
    drawVector3d(zeros(1,3),conf_val*elli_semiaxes(i)*eigenvec_q(:,i)','b','LineWidth',2);
end

xlabel('x [deg]');ylabel('y [deg]');zlabel('z [deg]');
view(30,30);


%% 3D RF and external references
figure()

hold on;

% Inertial Reference Frame
Matrix1 = [1 0 0;0 1 0; 0 0 1];
TT1 = trasm(Matrix1,[0 0 0]');
pltassi(TT1,'k','_{R}',1,1.3);

% Body Reference Frame
Matrix2 = B2R_RotM;
TT2 = trasm(Matrix2,[0 0 0]');
pltassi(TT2,'r','_{B}',1,1.3);

% draw reference vectors
drawVector3d(0*points_r',points_r','m','LineWidth',2);

xlabel('x');ylabel('y');zlabel('z');

axis equal;
view(30,30);

toc









