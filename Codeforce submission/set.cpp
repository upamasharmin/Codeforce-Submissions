#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
 using namespace std;
 int main(){
 stack<string>s;

 s.push("jino");
 s.push("ginh");
 s.push("nilo");

 while(!s.empty()){
    string x;
    x=s.top();
    cout<<x<<endl;
    s.pop();
 }
 }
