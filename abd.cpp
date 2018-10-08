#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,r,s,i,a,j;
    scanf("%d%d",&l,&r);
    a=0;
	for(i=l;i<=r;i+=1){
        s=1;
        for(j=2;j<=floor(sqrt(i));j+=1){
            if (!(i%j)){
                    s=s+j+(i/j);
            }
        }
        if (floor(sqrt(i))==sqrt(i)) {
                s-=sqrt(i);
        }
        if (s>i) {
                a+=1;
        }
	}
	printf("%d",a);
}
