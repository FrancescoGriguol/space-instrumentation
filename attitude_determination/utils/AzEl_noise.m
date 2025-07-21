%**************************************************************************
% 
% Andrea Valmorbida and Anese Giovanni- 22/11/2023
% 
% This script computes the azimuth and elevation measured by a sensor
% considering a random noise with a normal distribution.
%
%**************************************************************************

azb = []; elb = [];
for j=1:ngr
    azb = [azb, azb_(sum(nrefg(1:(j-1)))+(1:nrefg(j))) + sigmag(j)*randn(1,nrefg(j))];
    elb = [elb, elb_(sum(nrefg(1:(j-1)))+(1:nrefg(j))) + sigmag(j)*randn(1,nrefg(j))];
end