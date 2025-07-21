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

%% Initialization
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
OrbitPropagation_time = 11603; % Seconds of orbit propagation
Sample_Time = 1;
T = OrbitPropagation_time/Sample_Time;
t = [0:1:T]; % Time vector [s]


%% Cubsat geometry and mass properties: 3U
% Dimensions
L_x = 0.10; % [m]
L_y = 0.10; % [m]
L_z = 0.30; % [m]

% Mass
m = 3.99; % [kg]

% Tensor of inertia's elements, along principal axes of inertia
I_xx = (1/12)*m*(L_y^2 + L_z^2); % [kg*m^2]
I_yy = (1/12)*m*(L_x^2 + L_z^2); % [kg*m^2]
I_zz = (1/12)*m*(L_x^2 + L_y^2); % [kg*m^2]


%% Calculation of Nadir vector in R_RF; calculation of minimum and maximum azimuth and elevation of Earth in R_RF
% Nadir vector elements are opposite of position vector's elements in ECI_RF
load('R_position.mat') % Raw data of position vectors in ECI_RF from Simulink orbit propagator in [m]
ECI_position_vector_Data = [out.R_position.Data]; % rows = second of propagation ; columns = X|Y|Z [m] of S/C in ECI(=ICRF EPOCH J2000) => cartesian coordinates of S/C in ECI
                                                                                   
% For each second of orbit propagation, calculate [az,el,r] of Earth in R_RF
R_az_earth_Data_brute = [];
R_el_earth_Data_brute = [];
R_r_earth_Data_brute = [];

for i = 1:length(t)
    ECI_position = ECI_position_vector_Data(i,:);
    Nadir_vector = - ECI_position;
    Nadir_uvec = Nadir_vector/(norm(Nadir_vector));
    [az_earth,el_earth,r_earth] = cart2sph(Nadir_uvec(:,1),Nadir_uvec(:,2),Nadir_uvec(:,3));
    R_az_earth_Data_brute = [R_az_earth_Data_brute az_earth];
    R_el_earth_Data_brute = [R_el_earth_Data_brute el_earth];
    R_r_earth_Data_brute = [R_r_earth_Data_brute r_earth];
end

% R_nadir_uvec_Data: row = second of propagation ; columns = az|el|r of Earth in R_RF => spherical coordinates of Nadir unit vector in R_RF
R_nadir_uvec_Data = [R_az_earth_Data_brute',R_el_earth_Data_brute',R_r_earth_Data_brute']; % [rad|rad|m]

% Minimum azimuth of Earth in R_RF
R_az_earth_lim_inf = rad2deg(min(R_az_earth_Data_brute)); % [deg]

% Maximum azimuth of Earth in R_RF
R_az_earth_lim_sup = rad2deg(max(R_az_earth_Data_brute)); % [deg]

% Minimum elevation of Earth in R_RF
R_el_earth_lim_inf = rad2deg(min(R_el_earth_Data_brute)); % [deg]

% Maximum elevation of Earth in R_RF
R_el_earth_lim_sup = rad2deg(max(R_el_earth_Data_brute)); % [deg]

% R_nadir_vector_Data: row = second of propagation ; columns = X|Y|Z [m] of Earth in R_RF => cartesian coordinates of Nadir unitvector in R_RF
R_nadir_vector_Data_no_uvec = - ECI_position_vector_Data; % [m]
R_nadir_vector_Data_brute = [];

for i = 1:length(t)
    R_nadir_vector = R_nadir_vector_Data_no_uvec(i,:)/(norm(R_nadir_vector_Data_no_uvec(i,:)));
    R_nadir_vector_Data_brute = [R_nadir_vector_Data_brute R_nadir_vector];
end
R_nadir_vector_Data = reshape(R_nadir_vector_Data_brute,3,[])'; % [m|m|m]


%% Calculation of Sun vector in R_RF; calculation of minimum and maximum azimuth and elevation of Earth in R_RF
% Calculation of Sun vector in ECI_RF: it is done by function: approxECISunPosition
UTCTime = [2023,12,22,3,27,0]; % UTC Time initialization orbit
jd = juliandate(UTCTime); % [days]
jd_sec = jd*86400; % [sec]
ECI_sun_vector_Data_brute = [];

for i = 1:length(t)
    jd_sec_new = jd_sec + (i-1);
    jd_new = jd_sec_new/86400;
    UTCTime = datetime(jd_new,'convertfrom','juliandate','format','[yyyy,MM,dd,HH,mm,ss]');
    vector = approxECISunPosition(UTCTime);
    ECI_sun_vector_Data_brute = [ECI_sun_vector_Data_brute vector];
end

% ECI_sun_vector_Data: rows = second of propagation ; columns = X|Y|Z of Sun vector in ECI_RF => cartesian coordinates of Sun vector in ECI_RF
ECI_sun_vector_Data = reshape(ECI_sun_vector_Data_brute,3,[])'; % [m]

% Determination of Sun vector in R_RF: R_sun_vector = Nadir vector + Sun vector (vectorial sum)
R_sun_vector_Data_no_uvec = R_nadir_vector_Data_no_uvec + ECI_sun_vector_Data; % [m]
R_sun_vector_Data_brute = [];

for i = 1:length(t)
    R_sun_vector = R_sun_vector_Data_no_uvec(i,:)/(norm(R_sun_vector_Data_no_uvec(i,:)));
    R_sun_vector_Data_brute = [R_sun_vector_Data_brute R_sun_vector];
end
R_sun_vector_Data = reshape(R_sun_vector_Data_brute,3,[])';
% R_sun_vector_Data: rows = second of propagation ; columns = X|Y|Z of Sun unitvector in R_RF => cartesian coordinates of Sun unitvector in R_RF

% For each second of orbit propagation, calculate [az,el,r] of Sun in R_RF
R_az_sun_Data_brute = [];
R_el_sun_Data_brute = [];
R_r_sun_Data_brute = [];
R_sun_vector_Data_brute = [];

for i = 1:length(t)
    R_sun_vector = R_sun_vector_Data(i,:);
    R_sun_uvec = R_sun_vector/(norm(R_sun_vector));
    [az_sun,el_sun,r_sun] = cart2sph(R_sun_uvec(:,1),R_sun_uvec(:,2),R_sun_uvec(:,3));
    R_az_sun_Data_brute = [R_az_sun_Data_brute az_sun];
    R_el_sun_Data_brute = [R_el_sun_Data_brute el_sun];
    R_r_sun_Data_brute = [R_r_sun_Data_brute r_sun];
end
R_sun_uvec_Data = [R_az_sun_Data_brute',R_el_sun_Data_brute',R_r_sun_Data_brute']; % [rad|rad|m]
% R_sun_uvec_Data: row = second of propagation ; columns = az|el|r of Sun in R_RF => spherical coordinates of Sun unit vector in R_RF

% Miminum azimuth of Sun in R_RF
R_az_sun_lim_inf = rad2deg(min(R_az_sun_Data_brute)); % [deg]

% Maximum azimuth of Sun in R_RF
R_az_sun_lim_sup = rad2deg(max(R_az_sun_Data_brute)); % [deg]

% Minimum elevation of Sun in R_RF
R_el_sun_lim_inf = rad2deg(min(R_el_sun_Data_brute)); % [deg]

% Maximum elevation of Sun in R_RF
R_el_sun_lim_sup = rad2deg(max(R_el_sun_Data_brute)); % [deg]


%% Calculate minimum and maximum azimuth and elevation of stars within CubeStar's FOV
% Star sensor FOV
CubeStar_FOV = deg2rad(48); % [rad]

% Minimum azimuth of possible star detection
R_az_star_lim_inf = R_az_earth_lim_inf; % [deg]

% Maximum azimuth of possible star detection
R_az_star_lim_sup = R_az_earth_lim_sup; % [deg]

% Minimum elevation of possible star detection
R_el_star_lim_inf = rad2deg(- incl - (CubeStar_FOV/2)); % [deg]

% Maximum elevation of possible star detection
R_el_star_lim_sup = rad2deg(incl + (CubeStar_FOV/2)); % [deg]


%% Sensors and targets
% Sensors: CubeSENSE and CubeSTAR from CUBESPACE
% Number of group of references = number of sensors = number of elements of vector.
nrefg = 1*[1 1 1];
% The number in each element of the array is the number of external
% targets identified by the corresponding sensor.
% In this case: - Sensor 1, CubeSense Sun = Sun sensor => 1 external target: Sun
%               - Sensor 2, CubeSense Earth = Nadir Sensor => 1 external target: Earth
%               - Sensor 3, CubeStar = Star tracker => from 1 to 15 external targets: Stars
nref = sum(nrefg);
sigmag = deg2rad([0.22 0.22 0.01845]); % [rad]
ngr = length(nrefg);
azrg_lim = deg2rad([R_az_earth_lim_inf R_az_earth_lim_sup; R_az_sun_lim_inf R_az_sun_lim_sup; R_az_star_lim_inf R_az_star_lim_sup]); % [rad]
elrg_lim  = deg2rad([R_el_earth_lim_inf R_el_earth_lim_sup; R_el_sun_lim_inf R_el_sun_lim_sup; R_el_star_lim_inf R_el_star_lim_sup]); % [rad]


%% Definition of rotation matrix from B_RF to R_RF:
% Body Reference Frame: B_RF
% B_RF = (x,y,z): - center: CM of S/C
%                 - x-axis is tangent to foward-moving direction along orbit trajectory, co-planar to orbit
%                 - y-axis is 90deg right of x-axis, co-planar to orbit
%                 - z-axis completes the right hand coordinate system
%                 - it is MATLAB/Simulink's Body-Coordinates reference frame
%                 - for more info: 
%                   https://it.mathworks.com/help/aeroblks/about-aerospace-coordinate-systems.html
%                 - THE B_RF IS NADIR POINTED, THEREFORE: - z-axis is Nadir pointed
%                                                         - x-axis is tangent to foward-moving direction along orbit trajectory, co-planar to orbit
%                                                         - y-axis completes the right hand coordinate system
%
% Body Reference Frame: R_RF
% R_RF= (X,Y,Z): - center: CM of S/C
%                - x-axis points towards Vernal Point
%                - z-axis is parallel to Earth's rotation axis, aligned towards Earth's Nord
%                - y-axis completes the right hand coordinate system
%                - it is MATLAB/Simulink's LVLH reference frame
%                 - for more info: 
%                   https://it.mathworks.com/help/aeroblks/spacecraftdynamics.html


%% Data load from Simulink
% Euler angles at each second of orbit propagation for XYZ rotation from B_RF to R_RF
% Euler angles = [phi theta psi]                          
load('eul_XYZ.mat')
R2B_eulang_XYZ_Data = [out.eul_XYZ.Data]; % [rad]

% Euler angles at each second of orbit propagation for ZYX rotation from B_RF to R_RF
% Euler angles = [psi theta phi] 
load('eul_ZYX.mat')
R2B_eulang_ZYX_Data = [out.eul_ZYX.Data]; % [rad]

% Euler angles at each second of orbit propagation for YXY rotation from B_RF to R_RF
% Euler angles = [theta thi theta] 
load('eul_YXY.mat')
R2B_eulang_YXY_Data = [out.eul_YXY.Data]; % [rad]


%% Computation of target points in B_RF, in both cartesian and spherical coordinates
% Nadir target point: cartesian and spherical coordinates in B_RF
B_nadir_vector_Data_brute = [];
B_az_earth_Data_brute = [];
B_el_earth_Data_brute = [];
B_r_earth_Data_brute = [];

for i = 1:length(t)
    % Computation cartesian coordinates
    R_nadir_vector = R_nadir_vector_Data(i,:);
    R2B_RotM = eul2rotm(R2B_eulang_XYZ_Data(i,:),'XYZ');
    B_nadir_vector_column = (R2B_RotM)*(R_nadir_vector');
    B_nadir_vector = B_nadir_vector_column';
    B_nadir_vector_Data_brute = [B_nadir_vector_Data_brute B_nadir_vector];

    % Computation spherical coordinates
    R_nadir_uvec = R_nadir_vector/(norm(R_nadir_vector));
    R2B_RotM = eul2rotm(R2B_eulang_XYZ_Data(i,:),'XYZ');
    B_nadir_uvec_column = R2B_RotM*(R_nadir_uvec)';
    B_nadir_uvec = B_nadir_uvec_column';
    [az,el,r] = cart2sph(B_nadir_uvec(:,1),B_nadir_uvec(:,2),B_nadir_uvec(:,3));
    B_az_earth_Data_brute = [B_az_earth_Data_brute az];
    B_el_earth_Data_brute = [B_el_earth_Data_brute el];
    B_r_earth_Data_brute = [B_r_earth_Data_brute r];
end

% B_nadir_vector_Data: row = second of propagation ; columns = X|Y|Z [m] of Earth in B_RF => cartesian coordinates of Nadir unit vector in B_RF
B_nadir_vector_Data = reshape(B_nadir_vector_Data_brute,3,[])'; % [m|m|m]

% B_nadir_uvec_Data: row = second of propagation ; columns = az|el|r of Earth in B_RF => spherical coordinates of Nadir unit vector in B_RF
B_nadir_uvec_Data = [B_az_earth_Data_brute',B_el_earth_Data_brute',B_r_earth_Data_brute']; % [rad|rad|m]


% Sun target point: cartesian and spherical coordinates in B_RF
B_sun_vector_Data_brute = [];
B_az_sun_Data_brute = [];
B_el_sun_Data_brute = [];
B_r_sun_Data_brute = [];
for i = 1:length(t)
    % Computation cartesian coordinates
    R_sun_vector = R_sun_vector_Data(i,:);
    R2B_RotM = eul2rotm(R2B_eulang_XYZ_Data(i,:),'XYZ');
    B_sun_vector_column = (R2B_RotM)*(R_sun_vector');
    B_sun_vector = B_sun_vector_column';
    B_sun_vector_Data_brute = [B_sun_vector_Data_brute B_sun_vector];

    % Computation spherical coordinates
    R_sun_uvec = R_sun_vector/(norm(R_sun_vector));
    R2B_RotM = eul2rotm(R2B_eulang_XYZ_Data(i,:),'XYZ');
    B_sun_uvec_column = R2B_RotM*(R_sun_uvec)';
    B_sun_uvec = B_sun_uvec_column';
    [az,el,r] = cart2sph(B_sun_uvec(:,1),B_sun_uvec(:,2),B_sun_uvec(:,3));
    B_az_sun_Data_brute = [B_az_sun_Data_brute az];
    B_el_sun_Data_brute = [B_el_sun_Data_brute el];
    B_r_sun_Data_brute = [B_r_sun_Data_brute r];
end

% B_sun_vector_Data: row = second of propagation ; columns = X|Y|Z [m] of Sun in B_RF => cartesian coordinates of Sun vector in B_RF
B_sun_vector_Data = reshape(B_sun_vector_Data_brute,3,[])'; % [m|m|m]

% B_sun_uvec_Data: row = second of propagation ; columns = az|el|r of Sun in B_RF => spherical coordinates of Sun unit vector in B_RF
B_sun_uvec_Data = [B_az_sun_Data_brute',B_el_sun_Data_brute',B_r_sun_Data_brute']; % [rad|rad|m]


% Random Star target point: cartesian and spherical coordinates
% Spherical coordinates
R_az_star_Data_brute = [];
R_el_star_Data_brute = [];
R_r_star_Data_brute = [];
R_star_vector_Data_brute = [];
B_star_vector_Data_brute = [];
B_az_star_Data_brute = [];
B_el_star_Data_brute = [];
B_r_star_Data_brute = [];
for i = 1:length(t)
    % Random values of (az,el,r) of a star point in R_RF
    az_star = unifrnd(R_az_star_lim_inf,R_az_star_lim_sup);
    el_star = unifrnd(R_el_star_lim_inf,R_el_star_lim_sup);
    r_star = 1;
    R_az_star_Data_brute = [R_az_star_Data_brute az_star];
    R_el_star_Data_brute = [R_el_star_Data_brute el_star];
    R_r_star_Data_brute = [R_r_star_Data_brute r_star];

    % Star point in cartesian coordinates in R_RF
    [X,Y,Z] = sph2cart(az_star, el_star,r_star);
    R_star_vector = [X,Y,Z];
    R_star_vector_Data_brute = [R_star_vector_Data_brute R_star_vector];
    R2B_RotM = eul2rotm(R2B_eulang_XYZ_Data(i,:),'XYZ');
    B_star_vector_column = R2B_RotM*(R_star_vector');
    B_star_vector = B_star_vector_column';

    % Star point in cartesian coordinates in B_RF 
    B_star_vector_Data_brute = [B_star_vector_Data_brute B_star_vector];

    % Star point in spherical coordinates in B_RF
    B_star_uvec = B_star_vector/(norm(B_star_vector));
    [az,el,r] = cart2sph(B_star_uvec(:,1),B_star_uvec(:,2),B_star_uvec(:,3));
    B_az_star_Data_brute = [B_az_star_Data_brute az];
    B_el_star_Data_brute = [B_el_star_Data_brute el];
    B_r_star_Data_brute = [B_r_star_Data_brute r];
end
% R_star_vector_Data: row = second of propagation ; columns = X|Y|Z [m] of possible star in R_RF => cartesian coordinates of Star unit vector in R_RF
R_star_vector_Data = reshape(R_star_vector_Data_brute,3,[])'; % [m|m|m]

% B_star_vector_Data: row = second of propagation ; columns = az|el|r of Sun in B_RF => spherical coordinates of Star unit vector in B_RF
B_star_vector_Data = reshape(B_star_vector_Data_brute,3,[])'; % [rad|rad|m]


%% Computation of azimuths and elevations of Earth, Sun and Star for each second of orbit propagation in B_RF
% B_az_Data: rows: second of orbit propagation ; columns = az_Earth|az_Sun|az_Star in B_RF
B_az_Data = [B_az_earth_Data_brute', B_az_sun_Data_brute',B_az_star_Data_brute']; % [rad|rad|rad] 

% B_el_Data: rows: second of orbit propagation ; columns = el_Earth|el_Sun|el_Star in B_RF
B_el_Data = [B_el_earth_Data_brute', B_el_sun_Data_brute',B_el_star_Data_brute']; % [rad|rad|rad]


%% Computation of azimuth and elevation measured by a sensor considering a random noise with a normal distribution.
% t = [0:1:T]
B_az_noise_Data_brute = [];
B_el_noise_Data_brute = [];
for i = 1 : length(t)
    azb_ = B_az_Data(i,:);
    elb_ = B_el_Data(i,:);
    for j=1:ngr
        B_az_noise_Data_brute = [B_az_noise_Data_brute, azb_(sum(nrefg(1:(j-1)))+(1:nrefg(j))) + sigmag(j)*randn(1,nrefg(j))];
        B_el_noise_Data_brute = [B_el_noise_Data_brute, elb_(sum(nrefg(1:(j-1)))+(1:nrefg(j))) + sigmag(j)*randn(1,nrefg(j))];
    end
    % B_az_noise_Data: rows = second of orbit propagation ; columns = az_Earth|az_Sun|az_Star with noise in B_RF
    B_az_noise_Data = (reshape(B_az_noise_Data_brute,nref,[]))'; % [rad|rad|rad]

    % B_el_noise_Data: rows = second of orbit propagation ; columns = el_Earth|el_Sun|el_Star with noise in B_RF
    B_el_noise_Data = (reshape(B_el_noise_Data_brute,nref,[]))'; % [rad|rad|rad]
end

% Create new cartesian coordinates with noise for Nadir
B_az_noise_earth_Data_brute = B_az_noise_Data(:,1);
B_el_noise_earth_Data_brute = B_el_noise_Data(:,1);
B_r_noise_earth_Data_brute = 1+zeros(length(t),1);
B_nadir_uvec_noise_Data = [B_az_noise_earth_Data_brute,B_el_noise_earth_Data_brute,B_r_noise_earth_Data_brute];
B_nadir_vector_noise_Data_brute = [];
for i = 1:length(t)
    B_nadir_uvec_noise = B_nadir_uvec_noise_Data(i,:);
    [x,y,z] = sph2cart(B_nadir_uvec_noise(:,1),B_nadir_uvec_noise(:,2),B_nadir_uvec_noise(:,3));
    B_nadir_vector_noise = [x,y,z];
    B_nadir_vector_noise_Data_brute = [B_nadir_vector_noise_Data_brute B_nadir_vector_noise];
end

% B_nadir_vector_noise_Data: row = second of propagation ; columns = X|Y|Z [m] of Earth in B_RF => cartesian coordinates of Nadir unit vector with noise in B_RF
B_nadir_vector_noise_Data = reshape(B_nadir_vector_noise_Data_brute,3,[])'; % [m|m|m]


% Create new cartesian coordinates with noise for Sun
B_az_noise_sun_Data_brute = B_az_noise_Data(:,2);
B_el_noise_sun_Data_brute = B_el_noise_Data(:,2);
B_r_noise_sun_Data_brute = 1+zeros(length(t),1);
B_sun_uvec_noise_Data = [B_az_noise_sun_Data_brute, B_el_noise_sun_Data_brute, B_r_noise_sun_Data_brute];
B_sun_vector_noise_Data_brute = [];
for i = 1:length(t)
    B_sun_uvec_noise = B_sun_uvec_noise_Data(i,:);
    [x,y,z] = sph2cart(B_sun_uvec_noise(:,1),B_sun_uvec_noise(:,2),B_sun_uvec_noise(:,3));
    B_sun_vector_noise = [x,y,z];
    B_sun_vector_noise_Data_brute = [B_sun_vector_noise_Data_brute B_sun_vector_noise];
end

% B_sun_vector_noise_Data: row = second of propagation ; columns = X|Y|Z [m] of Sun in B_RF => cartesian coordinates of Sun unit vector with noise in B_RF
B_sun_vector_noise_Data = reshape(B_sun_vector_noise_Data_brute,3,[])'; % [m|m|m]


% Create new cartesian coordinates with noise for Star
B_az_noise_star_Data_brute = B_az_noise_Data(:,3);
B_el_noise_star_Data_brute = B_el_noise_Data(:,3);
B_r_noise_star_Data_brute = 1+zeros(length(t),1);
B_star_uvec_noise_Data = [B_az_noise_star_Data_brute,B_el_noise_star_Data_brute,B_r_noise_star_Data_brute];
B_star_vector_noise_Data_brute = [];
for i = 1:length(t)
    B_star_uvec_noise = B_star_uvec_noise_Data(i,:);
    [x,y,z] = sph2cart(B_star_uvec_noise(:,1),B_star_uvec_noise(:,2),B_star_uvec_noise(:,3));
    B_star_vector_noise = [x,y,z];
    B_star_vector_noise_Data_brute = [B_star_vector_noise_Data_brute B_star_vector_noise];
end

% B_star_vector_noise_Data: row = second of propagation ; columns = X|Y|Z [m] of Star in B_RF => cartesian coordinates of Star unit vector with noise in B_RF
B_star_vector_noise_Data = reshape(B_star_vector_noise_Data_brute,3,[])'; % [m|m|m]


%% Use of QUEST for computing rotation matrix from R_RF to B_RF with noise, given the same set of vectors in both RF
eulang_q_Data_brute = [];

% Compute for each second of orbit propagation, the set of vectors in R_RF
for i = 1:length(t)
    R_nadir_vector = R_nadir_vector_Data(i,:); 
    R_sun_vector = R_sun_vector_Data(i,:);
    R_star_vector = R_star_vector_Data(i,:);
    points_r = [R_nadir_vector',R_sun_vector',R_star_vector'];
    % points_r: matrix whose columns are Nadir unit vector, Sun unit vector, Star unit vector expressed in cartesian coordinates in R_RF

% Compute for each second of orbit propagation, the set of vectors in B_RF with noise   
    B_nadir_vector_noise = B_nadir_vector_noise_Data(i,:); 
    B_sun_vector_noise = B_sun_vector_noise_Data(i,:);
    B_star_vector_noise = B_star_vector_noise_Data(i,:);
    points_b = [B_nadir_vector_noise',B_sun_vector_noise',B_star_vector_noise'];
    % points_r: matrix whose columns are Nadir unit vector, Sun unit vector, Star unit vector expressed in cartesian coordinates with noise in B_RF

% Compute the rotation matrix from R_RF to B_RF with noise using QUEST algorithm
    t = [0 0 0]'; % translation vector between the two RFs
    [R2B_RotM] = quest(points_r, points_b);

% Compute the euler angles = [psi,theta,phi] of rotation ZYX given the rotation matrix from R_RF to B_RF with noise using QUEST algorithm
    eulang_q = rotm2eul(R2B_RotM,'ZYX'); % [rad,rad,rad]
    eulang_q_Data_brute = [eulang_q_Data_brute eulang_q];
    % eulang_q_Data_brute: single row = repetition of sequence of euler angles [psi,theta,phi] for each second of orbit propagation from R_RF to B_RF with noise
end


%% Computation of error between: euler angles from R_RF to B_RF with noise (VS) euler angles from R_RF to B_RF without noise 
% eulang: single row = repetition of sequence of euler angles [psi,theta,phi] for each second of orbit propagation from R_RF to B_RF without noise
eulang = reshape(R2B_eulang_ZYX_Data',1,[]); % [rad]

% Computation of error angles in [deg]
err_eulang_Data_brute = [];
for i = 1:length(eulang)

    % Compute effective difference between angles
    if eulang_q_Data_brute(i) * eulang(i) <= 0

       if abs(eulang_q_Data_brute(i)) < pi/2 && abs(eulang(i)) < pi/2
          err_eulang = abs(eulang_q_Data_brute(i)) + abs(eulang(i));
       else abs(eulang_q_Data_brute(i)) > pi/2 && abs(eulang(i)) > pi/2 
            err_eulang = 2*pi - (abs(eulang_q_Data_brute(i)) + abs(eulang(i)));
       end

    else
        err_eulang = eulang_q_Data_brute(i) - eulang(i);
    end

    err_eulang_Data_brute = [err_eulang_Data_brute rad2deg(err_eulang)]; % [deg]
end

% err_eulang_Data: rows = second of orbit propagation ; columns = errors for agles [phi|theta|psi] [deg]
err_eulang_Data = fliplr(reshape(err_eulang_Data_brute,3,[])');


%% Plot of error angles for each second of orbit propagation:
%                       - X axis: second of orbit propagation
%                       - Y axis: angle error

figure(1)

subplot(3,1,1)
title('Scostamento orientamento della terna body a causa del rumore dello strumento')
plot(err_eulang_Data(:,1),':*b'); 
hold on;
ylabel('\epsilon_{\phi} [deg]');
ylim([-1 1])

subplot(3,1,2)
plot(err_eulang_Data(:,2),':*g'); 
hold on;
ylabel('\epsilon_{\theta} [deg]');
ylim([-1 1])

subplot(3,1,3)
plot(err_eulang_Data(:,3),':*r'); 
hold on;
xlabel('acquisition step');
ylabel('\epsilon_{\psi} [deg]');
ylim([-1 1])


%% Covaraince analysis
% root mean square
rms_q = rms(err_eulang_Data);

% Covariance matrix, eigenvalues and eigenvector
cov_q = cov(err_eulang_Data);
[eigenvec_q, eigenval_q] = eig(cov_q);


%% plot err ellipsoid
figure(2)

% Maginifcation factor and confidence level for three dimensional measures
mmf3 = [1      2      2.1544 2.3059 2.5003 2.7955 3      4.0331];  
ccl3 = [0.1987 0.7385 0.8    0.85   0.9    0.95   0.9707 0.999];
conf_val = ppval(spline(ccl3,mmf3),0.7385);

%elli = [elli_center elli_semiaxes elli_eulang_deg];
elli_center = [0 0 0];
elli_semiaxes = sqrt(diag(eigenval_q))';
elli_eulang_deg = rad2deg(rotm2eul(eigenvec_q,'XYZ'));

% draw sampling points
drawPoint3d(err_eulang_Data,'.r');

hold on;
% axis equal;

xlim([-1 1]);
ylim([-1 1]);
zlim([-1 1]);

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

% Compute for specific second of orbit propagation, the set of vectors in R_RF
% i = second of orbit propagation
% Case: i = 0
for i = 1
    R_nadir_vector = R_nadir_vector_Data(i,:); 
    R_sun_vector = R_sun_vector_Data(i,:);
    R_star_vector = R_star_vector_Data(i,:);
    points_r_t0 = [R_nadir_vector',R_sun_vector',R_star_vector'];
    % points_r: matrix whose columns are Nadir unit vector, Sun unit vector, Star unit vector expressed in cartesian coordinates in R_RF

% Compute for each second of orbit propagation, the set of vectors in B_RF with noise   
    B_nadir_vector_noise = B_nadir_vector_noise_Data(i,:); 
    B_sun_vector_noise = B_sun_vector_noise_Data(i,:);
    B_star_vector_noise = B_star_vector_noise_Data(i,:);
    points_b_t0 = [B_nadir_vector_noise',B_sun_vector_noise',B_star_vector_noise'];
    % points_r: matrix whose columns are Nadir unit vector, Sun unit vector, Star unit vector expressed in cartesian coordinates with noise in B_RF

% Compute for each second of orbit propagation, the set of vectors in B_RF with noise   
    B_nadir_vector = B_nadir_vector_Data(i,:); 
    B_sun_vector = B_sun_vector_Data(i,:);
    B_star_vector = B_star_vector_Data(i,:);
    points_b = [B_nadir_vector',B_sun_vector',B_star_vector'];

% Compute the rotation matrix from R_RF to B_RF with noise using QUEST algorithm
    t = [0 0 0]'; % translation vector between the two RFs
    [R2B_RotM] = quest(points_r_t0, points_b_t0);
    q = rotm2quat(R2B_RotM)

    [R2B_RotM_test] = quest(points_r_t0, points_b);
    q_test = rotm2quat(R2B_RotM_test)
    eul = rad2deg(rotm2eul(R2B_RotM'))
















% Compute the euler angles = [psi,theta,phi] of rotation ZYX given the rotation matrix from R_RF to B_RF with noise using QUEST algorithm
    % quat = rotm2quat(R2B_RotM);
    % eul_XYZ = quat2eul(quat,'YXY');
    % R2B_RotM_t0 = eul2rotm(eul_XYZ,'XYZ');
end

figure(3)

hold on;

% Inertial Reference Frame
Matrix1 = [1 0 0;0 1 0; 0 0 1];
TT1 = trasm(Matrix1,[0 0 0]');
pltassi(TT1,'k','_{R}',1,1.3);

% Body Reference Frame
Matrix2 = R2B_RotM;
TT2 = trasm(Matrix2,[0 0 0]');
pltassi(TT2,'r','_{B}',1,1.3);

% draw reference vectors
drawVector3d(0*points_r_t0',points_r_t0','m','LineWidth',2);

xlabel('x');ylabel('y');zlabel('z');

axis equal;
view(30,30);



% % Case: i = 2902
% for i = 2901
%     R_nadir_vector = R_nadir_vector_Data(i,:); 
%     R_sun_vector = R_sun_vector_Data(i,:);
%     R_star_vector = R_star_vector_Data(i,:);
%     points_r_t2901 = [R_nadir_vector',R_sun_vector',R_star_vector'];
%     % points_r: matrix whose columns are Nadir unit vector, Sun unit vector, Star unit vector expressed in cartesian coordinates in R_RF
% 
% % Compute for each second of orbit propagation, the set of vectors in B_RF with noise   
%     B_nadir_vector_noise = B_nadir_vector_noise_Data(i,:); 
%     B_sun_vector_noise = B_sun_vector_noise_Data(i,:);
%     B_star_vector_noise = B_star_vector_noise_Data(i,:);
%     points_b_t2901 = [B_nadir_vector_noise',B_sun_vector_noise',B_star_vector_noise'];
%     % points_r: matrix whose columns are Nadir unit vector, Sun unit vector, Star unit vector expressed in cartesian coordinates with noise in B_RF
% 
% % Compute the rotation matrix from R_RF to B_RF with noise using QUEST algorithm
%     t = [0 0 0]'; % translation vector between the two RFs
%     [R2B_RotM] = quest(points_r_t2901, points_b_t2901);
% 
% % Compute the euler angles = [psi,theta,phi] of rotation ZYX given the rotation matrix from R_RF to B_RF with noise using QUEST algorithm
%     eulang_ZYX = rotm2eul(R2B_RotM,'ZYX'); % [rad,rad,rad]
%     eulang_XYZ = fliplr(eulang_ZYX);
%     R2B_RotM_t2901 = eul2rotm(eulang_XYZ,'XYZ'); % [rad,rad,rad]
% end
% 
% 
% % Case: i = 11604
% for i = 11603
%     R_nadir_vector = R_nadir_vector_Data(i,:); 
%     R_sun_vector = R_sun_vector_Data(i,:);
%     R_star_vector = R_star_vector_Data(i,:);
%     points_r_t11603 = [R_nadir_vector',R_sun_vector',R_star_vector'];
%     % points_r: matrix whose columns are Nadir unit vector, Sun unit vector, Star unit vector expressed in cartesian coordinates in R_RF
% 
% % Compute for each second of orbit propagation, the set of vectors in B_RF with noise   
%     B_nadir_vector_noise = B_nadir_vector_noise_Data(i,:); 
%     B_sun_vector_noise = B_sun_vector_noise_Data(i,:);
%     B_star_vector_noise = B_star_vector_noise_Data(i,:);
%     points_b_t11603 = [B_nadir_vector_noise',B_sun_vector_noise',B_star_vector_noise'];
%     % points_r: matrix whose columns are Nadir unit vector, Sun unit vector, Star unit vector expressed in cartesian coordinates with noise in B_RF
% 
% % Compute the rotation matrix from R_RF to B_RF with noise using QUEST algorithm
%     t = [0 0 0]'; % translation vector between the two RFs
%     [R2B_RotM] = quest(points_r_t11603, points_b_t11603);
% 
% % Compute the euler angles = [psi,theta,phi] of rotation ZYX given the rotation matrix from R_RF to B_RF with noise using QUEST algorithm
%     eulang_ZYX = rotm2eul(R2B_RotM,'ZYX'); % [rad,rad,rad]
%     eulang_XYZ = fliplr(eulang_ZYX);
%     R2B_RotM_t11603 = eul2rotm(eulang_XYZ,'XYZ'); % [rad,rad,rad]
% end





















































