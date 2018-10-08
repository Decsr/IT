#include<bits/stdc++.h>
using namespace std;
int a[100001],f[100001],l,s,n,i,Max=0;
//int min1(int x,int y,int z)
//{
//    if((x<=z)and(x<=y)){return x;}
//    if((y<=x)and(y<=z)){return y;}
//    return z;
//}
int main()
{
    freopen("PTRANG.inp","r",stdin);
    freopen("PTRANG.out","w",stdout);
    scanf("%d %d",&n,&l);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    f[1]=l-a[1];
    j=2;
    while (f[2]!=0)
    {
        if (min(f[1]-a[2],l-a[2])>0);
        f[2]=min(f[1]-a[2],l-a[2]);
    }
    else f[2]=l-a[2];
    for (i=3;i<=n;i++)
    {
        if (min(f[i]-a[i-1],l-a[i])>0)
        {
            f[i]=min(f[i]-a[i-1],l-a[i]);
        }
        else f[i]=l-a[i];
    }
//    f[1]=l-a[1];
//    f[2]=min(f[1],l-a[2]);
//    for (i=3;i<=n;i++)
//        {
//            f[i]=min(f[i-1],l-a[i]);
//        }
    for (i=1;i<=n;i++)
        if (Max<f[i]) Max=f[i];
    printf("%d",Max);
}

