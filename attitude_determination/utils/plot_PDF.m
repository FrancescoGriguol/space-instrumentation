%**************************************************************************
%
% Plot the Probability Density Function
% Andrea Valmorbida and Anese Giovanni- 22/11/2023
%
% This function plots the Probability Density Function
% 
% INPUT
% mean_AzEl - mean values vector of azimuth and elevation
% covariance - covariance matrix
% AzEl_deg - matrix with azimuth and elevation in the two columns [deg]
%
%**************************************************************************
function plot_PDF(mean_AzEl, covariance, AzEl_deg)
    % compute PDF in a node grid
    x1 = mean_AzEl(1)+(-3.5:0.1:3.5);
    x2 = mean_AzEl(2)+(-2.0:0.1:2.0);
    [X1,X2] = meshgrid(x1,x2);
    X = [X1(:) X2(:)];
    y = mvnpdf(X,mean_AzEl,covariance);
    y = reshape(y,length(x2),length(x1));
    
    % node grid for the lower sampling points
    x12 = mean_AzEl(1)+(-3.5:0.5:3.5);
    x22 = mean_AzEl(2)+(-2.0:0.5:2.0);
    [X12,X22] = meshgrid(x12,x22);
    X2 = [X12(:) X22(:)];
    y2 = mvnpdf(X2,mean_AzEl,covariance);
    y2 = reshape(y2,length(x22),length(x12));
    
    figure()
    hold on;
    
    % plot PDF
    srfh = surf(x1,x2,y);
    clim([min(y(:))-0.5*range(y(:)),max(y(:))]);
    set(srfh,'EdgeColor',0.3*[1 1 1],'FaceAlpha',0.7);
    
    % plot lower grid
    srfh2 = surf(x12,x22,-0.4+0*y2);
    set(srfh2,'EdgeColor',0.4*[1 1 1],'FaceAlpha',0);
    
    % plot samples
    plot3(AzEl_deg(:,1),AzEl_deg(:,2),-0.4+0*AzEl_deg(:,1),'.r','LineWidth',1);
    
    % set axes
    % axis equal;
    xlabel('azimuth [deg]'); ylabel('elevation [deg]'); zlabel('PDF');
    view(-30,25)
    title('Probability Density Function', 'FontSize', 16)

end