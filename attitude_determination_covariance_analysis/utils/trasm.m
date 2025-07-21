function Tij=trasm(Rij,Pij)

% Costruzione dell'operatore di roto-traslazione
% Rij matrice di rotazione
% Pij origine del sdr i espressa nel sdr j

Tij=eye(4,4);
Tij(1:3,1:3)=Rij;
Tij(1:3,4)=Pij;