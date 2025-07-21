function a=pltassi(TT0,colore,nomeasse,nomi,mod)
% plottaggio assi di un sdr generico definito
% rispetto al sdr O
% TT0      : operatore di roto-traslazione
% colore   : stringa contenete il colore del sdr
% nomeasse : stringa, nome del sdr
% nomi     : se =1 plotta i nomi degli assi se = 0 non li plotta
% mod      : lunghezza assi

  plot3([TT0(1,4) TT0(1,4)+TT0(1,1)*mod],...
        [TT0(2,4) TT0(2,4)+TT0(2,1)*mod],...
        [TT0(3,4) TT0(3,4)+TT0(3,1)*mod],colore)
% qui mettere hold on se usata da sola
  hold on
  plot3([TT0(1,4) TT0(1,4)+TT0(1,2)*mod],...
       [TT0(2,4) TT0(2,4)+TT0(2,2)*mod],...
       [TT0(3,4) TT0(3,4)+TT0(3,2)*mod],colore)

  plot3([TT0(1,4) TT0(1,4)+TT0(1,3)*mod],...
        [TT0(2,4) TT0(2,4)+TT0(2,3)*mod],...
        [TT0(3,4) TT0(3,4)+TT0(3,3)*mod],colore)
 if nomi==1
   Pxlabel=TT0*[mod+mod/8 mod/8 0 1]';
   Pylabel=TT0*[mod/8 mod+mod/8 0 1]';
   Pzlabel=TT0*[mod/8 0 mod+mod/8 1]';

  t = text(Pxlabel(1),Pxlabel(2),Pxlabel(3),['x ' nomeasse]);
  set(t,'FontSize',14);
  t = text(Pylabel(1),Pylabel(2),Pylabel(3),['y ' nomeasse]);
  set(t,'FontSize',14);
  t = text(Pzlabel(1),Pzlabel(2),Pzlabel(3),['z ' nomeasse]);
  set(t,'FontSize',14);
end

freccia(mod,6,TT0,colore)