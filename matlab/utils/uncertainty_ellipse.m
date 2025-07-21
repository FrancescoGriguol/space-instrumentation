%**************************************************************************
%
% Uncertainty ellipse function
% Andrea Valmorbida and Anese Giovanni- 22/11/2023
%
% This function computes the x and y coordinates of the uncertainty ellipse
% 
% [r_ellipse]=uncertainty_ellipse(x_c,y_c,phi,a,b)
% INPUT
% x_c - x coordinate of the center of the ellipse
% y_c - y coordinate of the center of the ellipse
% phi - orientation angle of the ellipse [rad]
% a - semi-major axis
% b - semi-minor axis
%
% OUTPUT
% r_ellipse - matrix with the x and y coordinates of the error ellipse
%
%**************************************************************************

function [r_ellipse]=uncertainty_ellipse(x_c,y_c,phi,a,b)

theta_grid = linspace(0,2*pi);  % angle for the parametrization of the ellipse
% the NON ROTATED ellipse in x and y coordinates 
ellipse_x_r  = a*cos( theta_grid );
ellipse_y_r  = b*sin( theta_grid );

% Rotation matrix
R = [ cos(phi) sin(phi); -sin(phi) cos(phi) ];

% Ellipse coordinates
r_ellipse = (R'*[ellipse_x_r;ellipse_y_r])'+ones(100,2).*[x_c,y_c];
end