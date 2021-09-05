#include<iostream>
#include<stdio.h>
#include<list>
#include<queue>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
list<float>mylist(4,2);
list<float>::iterator it;




for(it = mylist.begin();it!=mylist.end();it++)
{
    cout<<*it<<endl;

}
return 0;
}
