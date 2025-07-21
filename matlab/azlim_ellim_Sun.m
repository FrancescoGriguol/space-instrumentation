%% Azimut and Elevation limit of Sun-Target in sesor RF
% Determine Sun-Vector in ECI RF (R_RF) along orbit propagation

% init
clear, clc

T = 10000; % Time propagation
t = 0:1:T;
UTCTime = [2023,12,22,3,27,0]; % UTC Time initialization orbit
jd = juliandate(UTCTime);
jd_sec = jd*86400;
R_solar_uvec_Data_brute = [];
for i = 1:length(t)
    jd_sec_new = jd_sec + (i-1);
    jd_new = jd_sec_new/86400;
    UTCTime = datetime(jd_new,'convertfrom','juliandate','format','[yyyy,MM,dd,HH,mm,ss]');
    vector = approxECISunPosition(UTCTime);
    uvec = vector./(norm(vector));
    R_solar_uvec_Data_brute = [R_solar_uvec_Data_brute uvec];
end
R_solar_uvec_Data = reshape(R_solar_uvec_Data_brute,3,[])';
% rows: (unit) Solar vector in R_RF; columns: seconds of orbit propagation since start-date

az_sun_Data_brute = [];
el_sun_Data_brute = [];
r_sun_Data_brute = [];
for i = 1:length(t)
    R_solar_uvec = R_solar_uvec_Data(i,:);
    [az_sun,el_sun,r_sun] = cart2sph(R_solar_uvec(:,1),R_solar_uvec(:,2),R_solar_uvec(:,3));
    az_sun_Data_brute = [az_sun_Data_brute az_sun];
    el_sun_Data_brute = [el_sun_Data_brute el_sun];
    r_sun_Data_brute = [r_sun_Data_brute r_sun];
end

A = [az_sun_Data_brute',el_sun_Data_brute',r_sun_Data_brute'];

az_sun_lim_inf = rad2deg(min(az_sun_Data_brute));
az_sun_lim_sup = rad2deg(max(az_sun_Data_brute));

el_sun_lim_inf = rad2deg(min(el_sun_Data_brute));
el_sun_lim_sup = rad2deg(max(el_sun_Data_brute));




























