#include<bits/stdc++.h>
using namespace std;
int n,p,q,r,d,e,f;
int main(){
cin>>n;
while(n--){
cin>>p>>q>>r;
d+=p;
e+=q;
f+=r;
}
if(d|e|f) cout<<"NO";
else cout<<"YES";
}
