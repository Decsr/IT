#include<bits/stdc++.h>
const long long oo = LLONG_MAX;
using namespace std;
long long n , i , j , a[1000001] , b[1000001] , Min=oo;
int input()
{
    scanf ("%lld", &n);
    for ( i=1 ; i<=n ; i++ )
        scanf("%lld", &a[i]);
    for ( i=1 ; i<=n ; i++ )
        scanf ("%lld", &b[i]);
}
namespace NKSGAME
{
    int min1(int x ,int y ,int z)
{
    if ( x <= z && x <= y ) {return x;}
    if ( y <= x && y <= z ) {return y;}
    return z;
}
    int main()
    {
        for ( i = 1 ; i <= n ; i++ )
            b[i] = - b[i];
        sort (a+1,a+1+n);
        sort (b+1,b+1+n);
        j = 1;
        for ( i=1 ; i <= n ; i++ )
        {
            while ( b[j] <= a[i] && j <= n )
                j++;
            if (j>n)
                Min = min ( Min , abs ( a[i] - b[j-1] ) );
//        }printf("%lld %lld",j,a[i]-b[j-1]);
            if ( j > 1 && j <= n ) Min = min1 ( Min , abs ( a[i] - b[j-1] ) , abs ( a[i] - b[j] ) );
            if ( j==1 ) Min=abs( a[i] - b[j] );
        }
        printf("%lld", Min);
    }
}
int main()
{
    freopen("NKSGAME.INP","r",stdin);
    freopen("NKSGAME.OUT","w",stdout);
    input();
    NKSGAME::main();
}
