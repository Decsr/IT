#include<bits/stdc++.h>
using namespace std;
long long m,n,l,r,p,q,i,j,t,dem;
long long a[1001][1001],f[1001][1001];
long long s;
int main()
{
    freopen("AARRAY.inp","r",stdin);
    freopen("AARRAY.out","w",stdout);
    scanf("%d %d",&m,&n);
    for (i=1;i<=m;i++) f[i][0]=0;
    for (j=1;j<=n;j++) f[0][j]=0;
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
        {
            scanf("%lld",&a[i][j]);
            f[i][j] = f[i-1][j] + f[i][j-1] + a[i][j] - f[i-1][j-1];
        }
    scanf("%lld",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d %d %d %d",&l,&r,&p,&q);
        s = f[p][q] - f[l-1][q] - f[p][r-1] + f[l-1][r-1];
        printf("%lld \n",s);
    }
}
