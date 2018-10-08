#include<bits/stdc++.h>
using namespace std;
int pow(int a,int n)
{
    int tam;
    if (n==1)
        return a;
    tam=pow(a,n/2);
    if (n%2==0)
        return tam*tam;
    else
        return tam*tam*a;
}
int main()
{
    printf("%d",pow(2,5));
}
