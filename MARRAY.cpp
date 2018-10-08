#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long m,n,r,c,i,j,x,s,dem=0;
long long a[1010][1010],f[1010][1010];
int main()
{
    freopen("MARRAY.INP","r",stdin);
    freopen("MARRAY.OUT","w",stdout);
    scanf("%lld %lld %lld %lld %lld",&m,&n,&r,&c,&x);
    for (i=0;i<=m+1;i++)
        {
            f[i][0]=0;
            f[i][n+1]=0;
        }
    for (j=0;j<=n;j++)
        {
            f[0][j]=0;
            f[m+1][j]=0;
        }
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
            {
                scanf("%lld",&a[i][j]);
                    if (a[i][j]<x) f[i][j]=-1;
                else
                    if (a[i][j]>x) f[i][j]=1;
                else f[i][j]=0;
            }
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
                f[i][j]=f[i][j]+f[i-1][j]+f[i][j-1]-f[i-1][j-1];
    for (i=1;i<=m-r+1;i++)
        for (j=1;j<=n-c+1;j++)
            {
                s=f[i+r-1][j+c-1]-f[i+r-1][j-1]-f[i-1][j+r-1]+f[i-1][j-1];
                if (s<=0) dem++;
            }
    printf("%lld",dem);
}
