#include<iostream>
using namespace std;
main(){
string tmp;
cout<<"Enter the number: "<<endl;
cin>>tmp;
bool isNumber= true;
for(int i=0;i<tmp.length();i++)
{
    if (!(tmp[i]>=48 && tmp[i]<=57))
        isNumber=false;
}
     if (isNumber)
        cout<<"Number entered properly: "<<endl;
     else
        cout<<"Number was not entered properly: "<<endl;
}
