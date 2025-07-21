%**************************************************************************
% Three-axis attitude determination and uncertainty analysis
% Andrea Valmorbida and Anese Giovanni- 22/11/2023
%**************************************************************************

%% Clear workspace
clear all; close all; clc;


%%
addpath("algo/")
addpath("utils/")


%%
% add matGeom library => run this only one time 
%{
addpath('C:\Users\andre\Documents\MATLAB\matGeom-master\matGeom');
run setupMatGeom.m
%}


%%

% choose a test case: 0 to 6
test_case = 0;

% Call the sensor target script which evaluates the external targets
% identified by sensors according to the case
sensor_target;


% definition of rotation matrix from B Reference Frame (RF) to R RF
phi = deg2rad(20);
theta = deg2rad(30);
psi = deg2rad(40);
eulang = [phi theta psi]; % 3-2-1 sequence; true values
R_B_R = eul2rotm(eulang);
t = [0 0 0]'; % vettore di traslazione tra i due sistemi

% computation of target points in R RF in cartesian coordinates
[Xr,Yr,Zr] = sph2cart(azr,elr,rdr);
points_r = [Xr;Yr;Zr];

% computation of target points in B RF, in both cartesian and spherical
% coordinates
points_b_ = (R_B_R')*points_r; % true values
Xb_ = points_b_(1,:); Yb_ = points_b_(2,:); Zb_ = points_b_(3,:);
[azb_,elb_,rdb] = cart2sph(Xb_,Yb_,Zb_);


%% QUEST algo

% compute Euler angles affected by noise, using quest
nsample = 10000;
eulang_q = zeros(nsample,3);

for i=1:nsample
    
    % Compute azimuth and elevation with noise
    AzEl_noise;
    
    % compute points_b
    [Xb,Yb,Zb] = sph2cart(azb,elb,rdb);
    points_b = [Xb;Yb;Zb];
    
    % compute eulang_q(i,:)
    if nref == 2     % 2 targets -> algebraich method
        A = algebraic_method(points_b, points_r);
        eulang_q(i,:) = rotm2eul(A);
    elseif nref > 2  % >2 targets -> quest method
        [Rp_q, tp_q, err_q] = quest(points_b, points_r);
        eulang_q(i,:) = rotm2eul(Rp_q);
    end 
end

err_eulang_q = rad2deg(eulang_q - eulang);


%% plot err_eulang_q components (2D)

plot_err_eulang;


%% Covaraince analysis
% root mean square
rms_q = rms(err_eulang_q);
% Covariance matrix, eigenvalues and eigenvector
cov_q = cov(err_eulang_q);
[eigenvec_q, eigenval_q] = eig(cov_q);

% Maginifcation factor and confidence level for three dimensional measures
mmf3 = [1      2      2.1544 2.3059 2.5003 2.7955 3      4.0331];  
ccl3 = [0.1987 0.7385 0.8    0.85   0.9    0.95   0.9707 0.999];
conf_val = ppval(spline(ccl3,mmf3),0.997);

elli_center = [0 0 0];
elli_semiaxes = sqrt(diag(eigenval_q))';
elli_eulang_deg = rad2deg(rotm2eul(eigenvec_q,'ZYX'));
%elli = [elli_center elli_semiaxes elli_eulang_deg];


%% plot err ellipsoid

plot_err_ellipsoid;

%% 3D RF and external references

plot_refframe_target;

