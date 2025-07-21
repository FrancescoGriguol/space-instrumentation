%% Azimuth and elevation of Earth vector

clear, clc

T = 10000;
t = 0:1:T;

load('R_position.mat')
R_position_Data = [out.R_position.Data];

az_earth_Data_brute = [];
el_earth_Data_brute = [];
r_earth_Data_brute = [];
for i = 1:length(t)
    R_position = R_position_Data(i,:);
    Nadir_vector = - R_position;
    Nadir_uvec = Nadir_vector/(norm(Nadir_vector));
    [az_earth,el_earth,r_earth] = cart2sph(Nadir_uvec(:,1),Nadir_uvec(:,2),Nadir_uvec(:,3));
    az_earth_Data_brute = [az_earth_Data_brute az_earth];
    el_earth_Data_brute = [el_earth_Data_brute el_earth];
    r_earth_Data_brute = [r_earth_Data_brute r_earth];
end

% Nadir_Data: row = second of propagation ; columns = az | el | r
Nadir_Data = [az_earth_Data_brute',el_earth_Data_brute',r_earth_Data_brute'];

az_earth_lim_inf = rad2deg(min(az_earth_Data_brute));
az_earth_lim_sup = rad2deg(max(az_earth_Data_brute));

el_earth_lim_inf = rad2deg(min(el_earth_Data_brute));
el_earth_lim_sup = rad2deg(max(el_earth_Data_brute));
































