#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long t,j,i,dem1=0,dem2=0,n,x[100100],y[100100],tam,cc,tv;
void hang()
{
    for (t=1;t<=n;t++) dem1+=abs(x[t]-x[tv]);
    cc=0;
    for (t=tv+1;t<=n;t++)
    {
        cc++;
        dem1+=abs(y[t]-(y[tv]+cc));
    }
    cc=0;
    for (t=tv-1;t>=1;t--)
    {
        cc++;
        dem1+=abs(y[t]-(y[tv]-cc));
    }
}
void cot()
{
    for (t=1;t<=n;t++) dem2+=abs(y[t]-y[tv]);
    cc=0;
    for (t=tv+1;t<=n;t++)
    {
        cc++;
        dem2+=abs(x[t]-(x[tv]+cc));
    }
    cc=0;
    for (t=tv-1;t>=1;t--)
    {
        cc++;
        dem2+=abs(x[t]-(x[tv]-cc));
    }
}
int main()
{
    freopen("QQ.INP","r",stdin);
    freopen("QQ.OUT","w",stdout);
    scanf("%lld",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%lld %lld",&x[i],&y[i]);
    }
    tv=(n+1)/2;
    sort(x+1,x+n+1);
    sort(y+1,y+n+1);
    hang();
    cot();
    if (dem1<dem2) printf("%lld",dem1); else printf("%lld",dem2);
//printf("%lld %lld",dem1,dem2);
}
