#include<bits/stdc++.h>
using namespace std;
int main(){
int i,n,a,b,e,c,d;
scanf("%d",&n);
b=0;d=0;
for(i=1;i<=n;i+=1){
scanf("%d",&a);
if (!(a%2)) {b+=1;c=i;} else {d+=1;e=i;};
};if (b>d) {printf("%d",e);} else {printf("%d",c);};
}
