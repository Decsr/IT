#include<bits/stdc++.h>
using namespace std;
const long long oo=LLONG_MAX;
long long d[100001],w[100001],dem=0,n,i,j,res,rest,Min;


int input()
{
    scanf("%lld",&n);
    for ( i=1; i<=n; i++ )
        scanf("%lld %lld",&d[i],&w[i]);
}


namespace SUB
{
    int main()
    {
        for ( i=1; i<=n; i++ )
        {
            if ( w[i] != 0 && w[i+1] != 0 )
            {
                rest=i;
                while ( w[i] !=0 && w[i+1] !=0 )
                    i++;
                res=i;
                Min=oo;
                for ( i=rest; i<=res; i++ )
                    Min=min(Min,w[i]);
                if ( Min != 0 ) dem++;
                for ( i=rest; i<=res; i++ )
                    w[i]-=Min;
                if ( Min != 0 ) i=1;
            }
        }
        for ( i=1; i<=n; i++ )
            if ( w[i] > 0 ) dem++;
        printf("%lld",dem);
    }
}



int main()
{
    freopen("POSTER.INP","r",stdin);
    freopen("POSTER.OUT","w",stdout);
    input();
    SUB::main();
}
