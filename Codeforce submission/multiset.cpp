#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int main(){
multimap<string,int>m;
multimap<string,int>::iterator it;
m.insert(make_pair("dipta",40));
m.insert(make_pair("dipta",45));
m.insert(make_pair("dipta",49));
m.insert(make_pair("arno",45));
for(it=m.begin();it !=m.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}
}
