#include<bits/stdc++.h>
using namespace std;
long long k,x,a,b,i,j,res=0,tam,d[2000100];
bool snt[1000100];
void sangnt()
{
    for (i=2;i<=k;i++)
        snt[i]=true;
    i=2;
    while (i<=floor(sqrt(k)))
    {
        while (snt[i]==false)
            i++;
        for (j=2;j<=k/i;j++)
                snt[i*j]=false;
        i++;
    }
}
int main()
{
    freopen("KFACTOR.INP","r",stdin);
    freopen("KFACTOR.OUT","w",stdout);
    scanf("%lld %lld %lld",&k,&a,&b);
    sangnt();
    for (i=0;i<=b-a;i++)
        d[i]=i+a;
    for (i=2;i<=k;i++)
    if (snt[i]==true)
    {
        x=i;
        tam=a%x;
            if (tam==0) j=0;
        else j=x-tam;
        while (j<=b-a)
        {
            while (d[j]%x==0) d[j]=d[j]/x;
            j+=x;
        }
    }
    for (i=0;i<=b-a;i++)
        if (d[i]==1) res++;
    printf("%lld",res);
}
