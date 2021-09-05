#include<bits/stdc++.h>
using namespace std;
string p,q;
int main()
{
cin>>p>>q;
for(int i=0 ;i<p.size();i++)
{
cout<<(p[i]+q[i])%2;
}
}
