#include<bits/stdc++.h>
using namespace std;
long long m,n,i,j,r,c,k,tam=0,ix,iy,jx,jy,px,py,pz,pw;
long long a[100][100],b[100][100];
bool ok;
int main()
{
    freopen("HTAB.INP","r",stdin);
    freopen("HTAB.OUT","w",stdout);
    scanf("%lld %lld %lld",&m,&n,&k);
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
            scanf("%lld ",&a[i][j]);
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
            scanf("%lld ",&b[i][j]);
    for (r=1;r<=m;r++)
        for (c=1;c<=n;c++)
            for (ix=1;ix<=m-r+1;ix++)
                for (jx=1;jx<=n-c+1;jx++)
                    for (iy=1;iy<=m-r+1;iy++)
                        for (jy=1;jy<=n-c+1;jy++)
                        {
                            px=ix;py=jx;
                            pz=iy;pw=jy;
                            ok=true;
                            for (i=1;i<=r;i++)
                            {
                                for (j=1;j<=c;j++)
                                {
                                    if (abs(a[px][py]-b[pz][pw])>k) ok=false;
                                    py++;
                                    pw++;
                                }
                                px++;
                                pz++;
                                py=jx;
                                pw=jy;
                            }
                            if (ok==true) tam=max(tam,r*c);
                        }
    printf("%lld",tam);
//    for (i=1;i<=m;i++)
//        {
//            for (j=1;j<=n;j++)
//            printf("%lld ",a[i][j]);
//            printf("\n");
//        }
//    for (i=1;i<=m;i++)
//        {
//            for (j=1;j<=n;j++)
//            printf("%lld ",b[i][j]);
//            printf("\n");
//        }
}
