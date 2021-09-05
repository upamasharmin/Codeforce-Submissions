#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[100];
    int b=0,c=0;
    cin>>a;
    for(int i=0;i<strlen(a);i++)
    {
if(a[i]>='a'&& a[i]<='z')
    b++;
else
    c++;
    }
if(b>=c)
    cout<<strlwr(a);
    else
        cout<<strupr(a);
}
