Uses Math;
Const Fi='';//FLOWER.INP';
      Fo='';//FLOWER.OUT';
Var A,Maxd: Array[0..101,0..101] of Longint;
    U,V,Max1,S,i,j,h: Longint;
    F: Text;

Procedure DocFile;
  Begin
    Assign (F,Fi); Reset (F);
    Readln (F,U,V);
    For i:=1 to U do
      For j:=1 to V do Read(F,A[i,j]);
  End;

Procedure QHD;
  Begin
    For i:=1 to U do
      For j:=1 to V do
        Begin
          If i<j then Maxd[i,j]:=Max(Maxd[i-1,j-1]+A[i,j],Maxd[i,j-1]);
          If i>j then Maxd[i,j]:=Maxd[i-1,j];
          If i=j then
            Begin
              S:=0;
              For h:=1 to i do S:=S+A[h,h];
              Maxd[i,j]:=S;
            End;
        End;
  End;

Procedure GhiFile;
  Begin
    Assign (F,Fo); Rewrite (F);
      For j:=1 to V do If Max1<Maxd[U,j] then Max1:=Maxd[i,j];
    Write (F,Max1);
    Close (F);
  End;

  Begin
    DocFile;
    QHD;
    GhiFile;
  End.