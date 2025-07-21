%**************************************************************************
% Single-axis determination and Montecarlo uncertainty analysis
% Andrea Valmorbida and Giovanni Anese - 22/11/2023
%**************************************************************************

%% Clear workspace
clear all; close all; clc

% add paths
addpath("algo/")
addpath("utils/")


%% DATI

% direzione di sole (1) e terra (2) rispetto ad un sistema di riferimento celeste
az1r = 314/180*pi;
el1r = -17/180*pi;

az2r = 213/180*pi;
el2r = -85/180*pi;

% angoli sole e terra 
beta = 35*pi/180; % angolo tra asse del satellite e sole
eta = 50*pi/180;  % angolo tra asse satellite e terra (nadir)

% incertezze
% nota: provare prima con ss=0.4deg, poi con 0.05 deg
ss = 0.4*pi/180;    % incertezza angolo sole, 1-sigma
se = 0.5*pi/180;    % incertezza angolo terra, 1-sigma

% Angoli (azimuth e elevation) dell'asse del satellite nel riferimento
% celeste 
A1_AzEl = SingleAxisAttDetAlgo(beta,eta,az1r,el1r,az2r,el2r); %[az, el]
A1_AzEl_deg = 180/pi*A1_AzEl;       % [az, el]


%% Montecarlo 

% Number of samples
N = 10000;

% beta and eta input vectors
beta_vect = beta + ss*randn(N,1);
eta_vect = eta + se*randn(N,1);

% results matrix => azumuth and elevation of A1
% each row => [azimuth,elevation] in rad
A1_AzEl_matrix = zeros(N,2);

% Single axis determination -> for each couple of perturbed input angles
% the algorithm computes the axis attitude 
for i=1:N
    A1_AzEl_matrix(i,:) = SingleAxisAttDetAlgo(beta_vect(i),eta_vect(i),az1r,el1r,az2r,el2r);
end
% Axis angles w.r.t. celestial frame in degrees
A1_AzEl_matrix_deg = 180/pi*A1_AzEl_matrix;     %[az, el]


%% Covariance Analysis

% Calculate the eigenvectors and eigenvalues
data = A1_AzEl_matrix_deg;
covariance = cov(data);
[eigenvec, eigenval] = eig(covariance);

% Get largest and smallest eigenvalues and eigenvectors
eigenval = diag(eigenval);      % only diagonal terms (eigenvalues)
smallest_eigenval = eigenval(1); 
largest_eigenval = eigenval(2); 

smallest_eigenvec = eigenvec(:,1);
largest_eigenvec = eigenvec(:,2);

% Calculate the angle between the x-axis and the largest eigenvector
angle = atan2(largest_eigenvec(2), largest_eigenvec(1));

% This angle is between -pi and pi.
% Let's shift it such that the angle is between 0 and 2pi
if(angle < 0)
    angle = angle + 2*pi;
end
% possible alternative => angle = wrapTo2Pi(angle);
angle_deg = rad2deg(angle);

% Get the coordinates of the data mean values: [az_mean el_mean]
mean_val = mean(data);

% Get the 99.7% confidence interval uncertainty ellipse
% https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0118537
conf_val = sqrt(-2*log(1-0.997));

% uncertainty ellipse parameter
X0 = mean_val(1); Y0 = mean_val(2);   % center of the uncertainty ellipse
a = conf_val*sqrt(largest_eigenval);  % semi-major axis
b = conf_val*sqrt(smallest_eigenval); % semi-minor axis

% ellipse coordinates
r_ellipse = uncertainty_ellipse(X0,Y0,angle,a,b);


%% Plot PDF 

plot_PDF(mean_val,covariance,A1_AzEl_matrix_deg);


%% Azimuth vs. elevation 2D plot

plot_MCM_results;



