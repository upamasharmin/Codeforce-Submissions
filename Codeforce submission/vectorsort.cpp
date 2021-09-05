#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
bool myfunction(int a, int b){
return a>b;
}
using namespace std;
int main(){
vector<int>vec;
vector<int>::iterator it;

vec.push_back(10);
vec.push_back(432);
vec.push_back(52);
vec.push_back(12);
vec.push_back(87);
vec.push_back(90);

sort(vec.begin(),vec.end(),myfunction);

for(it=vec.begin();it!=vec.end();it++)
{
    cout<<*it<<"\t";

}
puts("");
return 0;
}
