%**************************************************************************
%
% Scenario data
% Andrea Valmorbida and Anese Giovanni
%
% This script returns the data for the estimation of position with the
% minimun squared algorithm. It gives the positions of the Ground Stations
% (GS), the initial estimation vector (position and time delay) and the
% measured pseudoranges.
%
%**************************************************************************
% receiver true position
x0_true = 4.4 %cm
y0_true = 3 %cm

switch scenario
    case 3  % no ctau
        GS_x = [9.8 6.2 6.7 0.6  3.3 -2.0 -2.8]';   % GS x pos [cm]
        GS_y = [7.8 6.7 3.2 2.5 -2.7 -1.0 -6.0]';    % GS y pos [cm]
        toll = ...;        % toll on the while loop, 3e-2
        k_max = ...;         % max num of iter (per sicurezza anche nmax iterazioni se toll non sufficient per convergenza)
        ex = ...;          % receiver initial x pos error % varia gli errori per verificare la convergenza dell'alg
        ey = ...;         % receiver initial y pos error

        p_meas = [...]'; % measured pseudoranges 
        ctau = 0;        % time delay
        
        % receiver initial position
        R_x0 = x0_true + 1*ex;
        R_y0 = y0_true + 1*ey;
        
        % Initial variables values
        R_x = R_x0; R_y = R_y0; R_ctau = 0;
        Dx = [0,0]';
        k = 0;
        R_pos = [R_x,R_y];
        stop_check = 1;

    case 4  % with ctau % qua possiamo incollare i valori iniziali dello scenario 1 anche sostanzialmente
        GS_x = [...]';   % GS x pos
        GS_y = [...]';    % GS y pos
        toll = ...;                    % toll on the while loop
        k_max = ...;                     % max num of iter
        ex = ...;                       % receiver initial x pos error
        ey = ...;                       % receiver initial y pos error
        
        p_meas = [...]'; % measured pseudoranges 
        ctau = 0.02;            % time delay
        p_meas = p_meas + ctau*0.5*unifrnd(-1,1);

        % receiver initial position
        R_x0 = x0_true + 1*ex;
        R_y0 = y0_true + 1*ey;
        R_ctau0 = ctau+ctau*unifrnd(-1,1);
        % Initial variables values
        R_x = R_x0; R_y = R_y0; R_ctau = R_ctau0;
        Dx = [0,0,0]';
        k = 0;
        R_pos = [R_x,R_y];
        stop_check = 1;
end

% number of Ground Station (GS)
GS_n = length(GS_x);

%% SCENARIO 3 (NO TAU) E 4 (SI TAU) PER CASA CON GS LUNGO DIREZIONI PREFERENZIALI