Const Fi='';
      Fo='';
Var N,K,T,P,i,j: Longint;
    F: Array[0..1,0..51] of Longint;
    G,G1: Text;

  Begin
    Assign (G,Fi); Reset (G);
    Assign (G1,Fo); Rewrite (G1);
    Readln(G,N,K);
    Fillchar(F,Sizeof(F),0);
    F[0,0]:=1;
    For i:=1 to N do
      Begin
        P:=i mod 2;
        Read(G,T);
        For j:=0 to K-1 do F[P,j]:=0;
          For j:=0 to K-1 do
            If (f[1-P,j]>0) then
              Begin
                If (F[P,j]<f[1-P,j]) then f[P,j]:=f[1-P,j];
                If (F[P,(j+T) mod K]<=F[1-P,j]) then F[P,(j+t) mod K]:=f[1-P,j]+1;
              End;
      End;
    Write(G1,F[P,0]-1);
    Close (G); Close (G1);
  End.
