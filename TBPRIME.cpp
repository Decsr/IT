#include<bits/stdc++.h>
using namespace std;
const int maxn=501;
long long min1,min2,Max,t,g,n,m;
long long a[maxn][maxn],b[maxn][maxn];
bool snt[1000100];
void sangnt()
{
    Max=1000100;
    long long i,j;
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
    freopen("TBPRIME.inp","r",stdin);
    freopen("TBPRIME.OUT","w",stdout);
    scanf("%lld %lld",&m,&n);
    for (t=1;t<=m;t++)
    {
        for (g=1;g<=n;g++)
            {
                b[t][g]=0;
                scanf("%lld",&a[t][g]);
            }
    }
    sangnt();
    for (t=1;t<=m;t++)
    {
        for (g=1;g<=n;g++)
        {
            while (snt[a[t][g]]==false) {a[t][g]++;b[t][g]++;}
        }
    }
    min2=0;
    for (t=1;t<=m;t++) min2=min2+b[t][1];
    for (t=1;t<=m;t++)
    {
        min1=0;
        for (g=1;g<=n;g++) min1=min1+b[t][g];
        min2=min(min1,min2);
        if (min2==0) {printf("%lld",min2);exit(0);}
    }
    for (g=1;g<=n;g++)
    {
        min1=0;
        for (t=1;t<=m;t++) min1=min1+b[t][g];
        min2=min(min1,min2);
        if (min2==0) break;
    }
    printf("%lld",min2);
}
