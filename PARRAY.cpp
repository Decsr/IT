#include<bits/stdc++.h>
using namespace std;
long long a[5005][5005],f[5005][5005];
long long Max,n,m,r,c,demmax=0,s;
long long i,j;
bool snt[1000100];
void sangnt()
{
    Max=1000100;
    for (i=2;i<=Max;i++)
    {
        snt[i]=true;
    }

    i=2;
    while (i<=floor(sqrt(Max)))
    {
        while (snt[i]==false)
            i++;
        for (j=2;j<=Max/i;j++)
            {
                snt[i*j]=false;
            }
        i++;
    }
}
int main()
{
    freopen("PARRAY.inp","r",stdin);
    freopen("PARRAY.out","w",stdout);
    sangnt();
    scanf("%lld %lld %lld %lld",&m,&n,&r,&c);
    for (i=1;i<=m;i++) f[i][0]=0;
    for (j=1;j<=n;j++) f[0][j]=0;
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
        {
            scanf("%lld",&a[i][j]);
            if (snt[a[i][j]]==false) a[i][j]=0; else a[i][j]=1;
            f[i][j] = f[i-1][j] + f[i][j-1] + a[i][j] - f[i-1][j-1];
        }
//    for (i=1;i<=m;i++)
//        {for (j=1;j<=n;j++) printf("%lld",a[i][j]);printf("\n");}
    for (i=1;i<=m-r+1;i++)
        for (j=1;j<=n-c+1;j++)
        {
            s = f[i+r-1][j+c-1] - f[i-1][j+c-1] - f[i+r-1][j-1] + f[i-1][j-1];
            if (demmax<s) demmax=s;
        }
    printf("%lld",demmax);
}
