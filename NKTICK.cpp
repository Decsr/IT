#include<bits/stdc++.h>
using namespace std;
int t[70000],r[70000],i,f[70000];
long long n;
int main()
{
//    freopen("NKTICK.inp","r",stdin);
//    freopen("NKTICK.out","w",stdout);
    scanf("%lld",&n);
    for (i=1;i<=n;i++) scanf("%d",&t[i]);
    for (i=1;i<=n-1;i++) scanf("%d",&r[i]);
    f[1]=t[1];
    for (i=2;i<=n;i++)
    {
        f[i]=min(t[i]+f[i-1],r[i-1]+f[i-2]);
    }
    printf("%d",f[n]);
}
