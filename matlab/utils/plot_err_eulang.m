%**************************************************************************
%
% Plot the errors on the Euler angles estimation
% Andrea Valmorbida and Anese Giovanni- 22/11/2023
%
% This script plots the errors in the estimation of the Euler angles for 
% each sample.
%
%**************************************************************************

figure()

subplot(3,1,1)
plot(err_eulang_q(:,1),':*r'); hold on;
ylabel('\epsilon_{\phi} [deg]');

subplot(3,1,2)
plot(err_eulang_q(:,2),':*r'); hold on;
ylabel('\epsilon_{\theta} [deg]');

subplot(3,1,3)
plot(err_eulang_q(:,3),':*r'); hold on;
xlabel('acquisition step');
ylabel('\epsilon_{\psi} [deg]');