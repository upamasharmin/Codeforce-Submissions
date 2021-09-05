#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,r;
scanf("%d%d",&n,&m);
r=n*m;
if(n==1||m==1)
{
printf("Aksath");
}
 else if(r%2==0)
printf("Malvika");
else
printf("Aksath");
}

