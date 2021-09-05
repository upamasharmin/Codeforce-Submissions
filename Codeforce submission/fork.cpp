#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(int argc,char *argv[]){
	 cout<<"Hello"<<endl;
	 int id = fork();
	 cout<<"msg2"<<endl;
	 int id2 = fork();
	 cout<<"msg3"<<endl;
}

