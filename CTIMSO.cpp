#include<bits/stdc++.h>
using namespace std;
long long n,k,i,m,s=1;
int giaithua()
{
    for (i=1;i<=n;i++)
        s*=i;
}
void sub1()
{
//    if (n<=20)
    {
        giaithua();
        k=0;
        while (s%m==0)
        {
            s/=m;
            k++;
        }
        printf("%lld",k);
    }
}
void sub2()
{
    long long res=n;
    while (res!=1)
        if (res%2==0) res/=2;
        else break;
    if (res==1 && m==2)
    {
        k=n-1;
        printf("%lld",k);
    }
}
int main()
{
    freopen("CTIMSO.INP","r",stdin);
    freopen("CTIMSO.OUT","w",stdout);
    scanf("%lld %lld",&n,&m);
    sub1();
    sub2();
}
