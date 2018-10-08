#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,a,b,c,dem;
dem=0;
scanf("%d",&n);
for(i=1;i<=n;i+=1){
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b==2)||(a+c==2)||(b+c==2)) {dem+=1;};
};printf("%d",dem);
}
