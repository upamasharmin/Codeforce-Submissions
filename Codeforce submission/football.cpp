#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    gets(s);
    puts(strstr(s,"0000000")||strstr(s,"1111111")?"YES":"NO");
    return 0;
}
