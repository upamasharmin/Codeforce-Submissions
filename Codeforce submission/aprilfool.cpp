#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k;
cin>>t;
while(t--){
cin>>n>>k;
string s(n,'a');
int pos=2;
while(k>pos-1){
    k-=pos-1;
    pos++;
}
s[n-pos]='b';
s[n-k]='b';
cout<<s<<endl;
}



return 0;
}
