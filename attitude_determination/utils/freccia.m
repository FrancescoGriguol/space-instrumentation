function a=freccia(mod,N,T,colore)

% Costruzione della punta della freccia da applicare ad un generico sdr
% H altezza del punta (si assume pari al 10 % della lunghezza dell'asse)
% R raggio di base della punta (pari a H*tan(15°))
% N Numero di generatici della punta
% T operatore di roto-traslazione che definisce la terna alla quale le frecce
%  sono solidali.

H= 0.1*mod;
Rbase=H*tan(15*pi/180);
% Costruzione dei punti della "punta" nella configurazione iniziale, 
% disposta secondo l'asse z con la base nel piano (x,y).
R=[Rbase 0];
[Xci,Yci,Zci]=cylinder(R,N);
Zci=Zci*H;

% operatore di traslazione della punta lungo z
Ttz=trasm(eye(3),[0 0 mod-H]');

[Xpuntaz,Ypuntaz,Zpuntaz]=trasfg(Xci,Yci,Zci,T*Ttz);

% Operatore di roto-traslazione della punta per portarla lungo x a 
% partire dalla configurazione iniziale secondo z.
% E' una rotazione attorno all'asse y.
Trty=trasm([[0 0 1];[0 1 0];[-1 0 0]],[mod-H 0 0]');

[Xpuntax,Ypuntax,Zpuntax]=trasfg(Xci,Yci,Zci,T*Trty);

% Operatore di roto-traslazione della punta per portarla lungo y a 
% partire dalla configurazione iniziale secondo z.
% E' una rotazione attorno all'asse z.
Trtx=trasm([[1 0 0];[0 0 1];[0 -1 0]],[0 mod-H 0]');

[Xpuntay,Ypuntay,Zpuntay]=trasfg(Xci,Yci,Zci,T*Trtx);

% Plottaggio
surface(Xpuntaz,Ypuntaz,Zpuntaz,'FaceColor',colore,'EdgeColor',colore)
hold on
surface(Xpuntax,Ypuntax,Zpuntax,'FaceColor',colore,'EdgeColor',colore)

surface(Xpuntay,Ypuntay,Zpuntay,'FaceColor',colore,'EdgeColor',colore)
