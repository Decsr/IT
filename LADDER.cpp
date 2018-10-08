#include<bits/stdc++.h>
using namespace std;
long long n,k,i,a[1000001],res;
int main()
{
//    freopen("LADDER.INP","r",stdin);
//    freopen("LADDER.OUT","w",stdout);
    scanf ("%lld %lld",&n,&k);
    for (i=1;i<=n;i++)
        a[i]=1;
    for (i=1;i<=k;i++)
    {
        scanf("%lld",&res);
        a[res]=0;
    }
    for (i=2;i<=n;i++)
    {
        while (a[i]==0) i++;
        a[i]=a[i-1]+a[i-2];
        a[i]%=10102018;
    }
    printf("%lld",a[n]);
}
