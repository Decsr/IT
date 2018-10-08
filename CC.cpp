#include<bits/stdc++.h>
using namespace std;
long long n,i,j,m,tam,p1,p2,a[1000100],z1=0,z2=0;
//float
long long luythua(int x,int k)
{
    if (x==2) return k*k;
    return k;
}
int main()
{
    freopen("CC.inp","r",stdin);
    freopen("CC.out","w",stdout);
    scanf("%lld %lld",&n,&m);
    for (i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for (i=1;i<=n-1;i++)
    {
        for (j=i+1;j<=n;j++)
            if (a[i]<a[j])
            {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
    }
    if (n%2==0)
    {
        p1=n/2;
        p2=n/2+1;
        for (i=1;i<=n;i++)
            {
                z1=z1+luythua(m,abs(a[i]-a[p1]));
                z2=z2+luythua(m,abs(a[i]-a[p2]));
            }
        z1=min(z1,z2);
    }
    else
    {
        p1=n/2+1;
        for (i=1;i<=n;i++)
            z1=z1+luythua(m,abs(a[i]-a[p1]));
    }
    printf("%lld.00",a[p1]);
}
