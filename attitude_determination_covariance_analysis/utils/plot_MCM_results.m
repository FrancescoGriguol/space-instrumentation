figure()

% plot data
plot(A1_AzEl_matrix_deg(:,1),A1_AzEl_matrix_deg(:,2),'*r');
hold on;

% plot ellipse
plot(r_ellipse(:,1),r_ellipse(:,2),'-k', 'LineWidth',2);
plot(X0,Y0,'pk', 'LineWidth',2);

% Plot the eigenvectors
aa = 1.3; % enlarge a bit the ellipse principal axes frame
quiver(X0, Y0, -aa*conf_val*largest_eigenvec(1)*sqrt(largest_eigenval), -aa*conf_val*largest_eigenvec(2)*sqrt(largest_eigenval), '-b', 'LineWidth',2);
quiver(X0, Y0, -aa*conf_val*smallest_eigenvec(1)*sqrt(smallest_eigenval), -aa*conf_val*smallest_eigenvec(2)*sqrt(smallest_eigenval), '-g', 'LineWidth',2);

% set axes
axis equal;
xlabel('azimuth [deg]');
ylabel('elevation [deg]');