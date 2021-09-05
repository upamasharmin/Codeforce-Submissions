#include<iostream>
#include<stdio.h>
#include<string>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;
int main(){
int ar[5]={1,4,98,34,9};
list<int>mylist(ar,ar+5);
list<int>::iterator it;
it = find(mylist.begin(),mylist.end(),34);
cout<<*it<<endl;
mylist.insert(it,7);
for(it=mylist.begin();it!=mylist.end();it++)
{
  cout<<*it<<"\t";
}
cout<<"\n";
return 0;
}
