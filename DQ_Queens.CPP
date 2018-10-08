#include<bits/stdc++.h>
using namespace std;
int n,dem,t;
bool a[101],b[201],c[201];
int x[101];
int Id(int m)
{
    return m+20;
}
void xuly(int i) {
    int j,h;
    {
        for (j=1;j<=n;j++)
            if (a[j]==true && b[i+j]==true && c[Id(i-j)]==true)
                {
                    x[i]=j;
                    if (i==n) dem++;
                    else
                    {
                        a[j]=false;
                        b[i+j]=false;
                        c[Id(i-j)]=false;
                        xuly(i+1);
                        a[j]=true;
                        b[i+j]=true;
                        c[Id(i-j)]=true;
                    }
                }
    }return;
}
int main()
{
    scanf("%d",&n);
    dem=0;
    for (t=1;t<=100;t++)
    {
        a[t]=true;
    }
    for (t=1;t<=200;t++)
    {
        b[t]=true;
        c[t]=true;
    }
    xuly(1);
    printf("%d",dem);
}
