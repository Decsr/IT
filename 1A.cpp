#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,n,m,cd,cr;
cin >>n>>m>>a;
cd=(m%a)? m/a+1:m/a;
//cout << cd << "\n";
cr=(n%a)? n/a+1:n/a;
cout <<cd*cr;}


