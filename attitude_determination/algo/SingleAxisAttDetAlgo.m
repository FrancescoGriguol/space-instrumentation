%**************************************************************************
%
% Single axis attiude determination algorithm
% Andrea Valmorbida and Anese Giovanni- 22/11/2023
%
% This function evaluates the attitude of a single axis with the Grubin
% method.
% 
% [A1_AzEl] = SingleAxisAttDetAlgo(beta,eta,az1r,el1r,az2r,el2r)
% INPUT
% beta - angle between sun vector and satellite axis (measured)
% eta - angle between nadir and satellite axis (measured)
% az1r - azimuth of sun vector in the celestial reference frame
% el1r - elevation of sun vector in the celestial reference frame
% az2r - azimuth of nadir vector in the celestial reference frame
% el2r - elevation of nadir vector in the celestial reference frame
%
% OUTPUT 
% A1_AzEl - vector with azimuth and elevation [az el] of the axis attitude
%           in the celestial reference frame
% 
%**************************************************************************

function [A1_AzEl] = SingleAxisAttDetAlgo(beta,eta,az1r,el1r,az2r,el2r)


%% calcolo dei versori S e E in coordinate cartesiane rispetto ad un sistema di riferimento celeste
sr = [cos(az1r)*cos(el1r) sin(az1r)*cos(el1r) sin(el1r)]'; % sole S^
er = [cos(az2r)*cos(el2r) sin(az2r)*cos(el2r) sin(el2r)]'; % terra E^

%% formula di Grubin
x = (cos(beta)-dot(er,sr)*cos(eta))/(1-dot(er,sr)^2);
y = (cos(eta)-dot(er,sr)*cos(beta))/(1-dot(er,sr)^2);
z1 = ((1-x*cos(beta)-y*cos(eta))/(1-dot(er,sr)^2))^.5;
C = cross(sr,er);
A1 = x*sr+y*er+z1*C;

%% Azimuth ed Elevazione di A1
elA1 = asin(A1(3));
azA1 = atan2(A1(2),A1(1));

A1_AzEl = [azA1,elA1];

end

