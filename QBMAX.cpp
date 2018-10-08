#include<bits/stdc++.h>
using namespace std;
int n,a[200][200],f[200][200],i,j,m,Max=-100000;
int max1(int x,int y,int z)
{
    if((x>=z)and(x>=y)){return x;}
    if((y>=x)and(y>=z)){return y;}
    return z;
}
int main()
{
//    freopen("QBMAX.inp","r",stdin);
//    freopen("QBMAX.out","w",stdout);
    scanf("%d %d",&m,&n);
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
//    }
    for (i=1;i<=m;i++)
    {
        f[i][1]=a[i][1];
    }
    for (j=0;j<=n;j++) {f[0][j]=-10000;f[m+1][j]=-10000;}
    for (j=2;j<=n;j++)
        for (i=1;i<=m;i++)
        {
            f[i][j]=max1(f[i-1][j-1],f[i][j-1],f[i+1][j-1])+a[i][j];
        }
    for (i=1;i<=m;i++)
        Max=max(f[i][n],Max);
    printf("%d",Max);
//        for (j=1;j<=n;j++) printf("%d ",f[i][j]);printf("\n");
//        }
}
