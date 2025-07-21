%**************************************************************************
%
% Plot reference frames and targets
% Andrea Valmorbida and Anese Giovanni- 22/11/2023
%
% This script plots the reference frames (inertial and body) and the vector
% for the identified targets.
%
%**************************************************************************
figure()

hold on;

% Inertial Reference Frame
Matrix1 = [1 0 0;0 1 0; 0 0 1];
TT1 = trasm(Matrix1,[0 0 0]');
pltassi(TT1,'k','_{R}',1,1.3);

% Body Reference Frame
Matrix2 = R_B_R;
TT2 = trasm(Matrix2,[0 0 0]');
pltassi(TT2,'r','_{B}',1,1.3);

% draw reference vectors
drawVector3d(0*points_r',points_r','m','LineWidth',2);

xlabel('x');ylabel('y');zlabel('z');

axis equal;
view(30,30);
