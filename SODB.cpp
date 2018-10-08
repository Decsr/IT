#include<bits/stdc++.h>
using namespace std;
long long tam,m,x,i,dem=0,tong1,tong2;
int s(long long k)
{
    tam=0;
    while (k!=0)
    {
        tam=k%10+tam;
        k=k/10;
    }
    return tam;
}
int main()
{
    scanf("%lld",&m);
    i=2;
    x=m;
    tong1=s(m);
    tong2=0;
    while (m!=1 && i<=floor(sqrt(m)))
    {
        if (m%i==0)
        {
            tong2=tong2+s(m%i)
        }
    }
}
