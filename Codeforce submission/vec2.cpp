#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
int main(){
vector<int>vec;
vector<int>::iterator it;
for (i=0;i<5;i++)
{
    vec.push_back(i);
}
for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }
    return 0;
 }
