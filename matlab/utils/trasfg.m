function [Xn,Yn,Zn]=trasfg(X,Y,Z,T)

% Trasforma le coordinate X Y Z nelle nuove coo. Xn Yn Zn
% mediante l'operatore di rototraslazione T

Xn=T(1,1)*X+T(1,2)*Y+T(1,3)*Z+T(1,4);
Yn=T(2,1)*X+T(2,2)*Y+T(2,3)*Z+T(2,4);
Zn=T(3,1)*X+T(3,2)*Y+T(3,3)*Z+T(3,4);