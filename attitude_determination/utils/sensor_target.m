%**************************************************************************
% 
% Andrea Valmorbida and Anese Giovanni- 22/11/2023
% 
% This script switches between different combinations of number of sensors
% and identified targets and returns the azimuth and elevation vectors (azr
% and elr) of the "nominal" targets in the inertial frame.
%
% CASES
% Case 0: 3 sensors with 1 external target identified by each sensor and
% a standard deviation of 0.1 deg each
% 
% Case 1: 2 sensors with 1 external target identified by each sensor and
% a standard deviation of 0.5 deg each 
%
% Case 2: 2 sensors with 1 external target identified by each sensor and
% a standard deviation of 0.05 deg each 
%
% Case 3: 2 sensors with respectively 1 and 4 external targets identified
% and a standard deviation of 0.5 deg each
%
% Case 4: 4 sensors with respectively 5,7,6,9 external targets identified and
% a standard deviation of 0.1 deg each 
%
% Case 5: 3 sensors with 5 external targets identified by each one and
% a standard deviation of 0.5 deg each 
%
% Case 6: 3 sensors with respectively 1,1,3 external targets identified and
% a standard deviation of 0.5 deg each 
% 
%**************************************************************************

switch test_case
    case 0 
        nrefg = [1 1 1];  % number of group of references => n. of sensors
        % number of elements of the vector => number of sensors;
        % in this case, we have 3 sensors
        % the number in each element of the array is the number of
        % external targets identified by the corresponding sensor
        % in this example, sensor #1 identifies 1 external target,
        % wherease sensor #2 identifies 1 external target
        nref = sum(nrefg);
        sigmag = deg2rad([0.1, 0.1, 0.1]);
        ngr = length(nrefg);
        azrg_lim = deg2rad([0 30; 100 140; 180 210]);     % azimuth ranges
        elrg_lim  = deg2rad([- 80 -50; -10 40; 60 90]);   % elevation ranges

    case 1 
        nrefg = [1 1];  % number of group of references => n. of sensors
        % number of elements of the vector => number of sensors;
        % in this case, we have 2 sensors
        % the number in each element of the array is the number of
        % external targets identified by the corresponding sensor
        % in this example, sensor #1 identifies 1 external target,
        % wherease sensor #2 identifies 1 external target
        nref = sum(nrefg);
        sigmag = deg2rad([0.5, 0.5]);
        ngr = length(nrefg);
        azrg_lim = deg2rad([0 30; 100 140]);     % azimuth ranges
        elrg_lim  = deg2rad([- 80 -50; -10 40]); % elevation ranges
    
    case 2
         nrefg = [1 1];  % number of group of references => n. of sensors
        % number of elements of the vector => number of sensors;
        % in this case, we have 2 sensors
        % the number in each element of the array is the number of
        % external targets identified by the corresponding sensor
        % in this example, sensor #1 identifies 1 external target,
        % wherease sensor #2 identifies 1 external target
        nref = sum(nrefg);
        sigmag = deg2rad([0.05, 0.05]);
        ngr = length(nrefg);
        azrg_lim = deg2rad([0 30; 100 140]);     % azimuth ranges
        elrg_lim  = deg2rad([- 80 -50; -10 40]); % elevation ranges

    case 3
        nrefg = [1 4];  % number of group of references => n. of sensors
        % number of elements of the vector => number of sensors;
        % in this case, we have 2 sensors
        % the number in each element of the array is the number of
        % external targets identified by the corresponding sensor
        % in this example, sensor #1 identifies 1 external target,
        % wherease sensor #2 identifies 4 external targets
        nref = sum(nrefg);
        sigmag = deg2rad([0.1, 0.1]);
        ngr = length(nrefg);
        azrg_lim = deg2rad([0 30; 100 140]);     % azimuth ranges
        elrg_lim  = deg2rad([- 80 -50; -10 40]); % elevation ranges

    case 4
        nrefg = 1*[5 7 6 9];   
        
        nref = sum(nrefg);      % total numer of external references
        sigmag = deg2rad([0.1 0.1 0.1 0.1]); % sigma of each sensor
        
        ngr = length(nrefg);
        azrg_lim = deg2rad([0 30; 130 180; 230 270; 30 60]);    % azimuth ranges
        elrg_lim  = deg2rad([- 80 -50; -10 40; -20 20; 30 60]); % elevation ranges
        
    case 5
        nrefg = 1*[5 5 5]; % group
        nref = sum(nrefg);
        sigmag = deg2rad([0.5 0.5 0.5]);
        
        ngr = length(nrefg);
        azrg_lim = deg2rad([20 30; 150 160; 230 240]);
        elrg_lim  = deg2rad([- 80 -70; -70 -60; -50 -40]);
        
    case 6
        nrefg = 1*[1 1 3]; % group
        nref = sum(nrefg);
        sigmag = deg2rad([0.5 0.5 0.5]);
        
        ngr = length(nrefg);
        azrg_lim = deg2rad([20 30; 150 160; 230 240]);
        elrg_lim  = deg2rad([- 80 -70; -70 -60; -50 -40]);
end

azr = []; elr = [];
for i=1:ngr
    azr = [azr unifrnd(azrg_lim(i,1), azrg_lim(i,2), 1, nrefg(i))];
    elr = [elr unifrnd(elrg_lim(i,1), elrg_lim(i,2), 1, nrefg(i))];
end
rdr = 1+0*azr;