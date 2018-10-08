#include<bits/stdc++.h>
using namespace std;
int main()
  {   int a[51];
      int i,n,k,dem;
      scanf("%d %d",&n,&k);
      for(i=1;i<=n;i++)
      {
          scanf("%d",&a[i]);
      };
      i=1;dem=0;
      while (i<=k)
      {
          if (a[i]==a[i+1]) {k+=1;};
          dem+=1;
          i+=1;
      };
      if (a[1]==0) {printf("%d",0);} else {printf("%d",dem);};
  }
