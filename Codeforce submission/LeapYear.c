#include<stdio.h>
#include<conio.h>
int main(void)
{
    int Year;
    printf("Enter Year:");
    scanf("%d",&Year);
    if(((Year%4==0)&&(Year%100!=0))||(Year%4==0)&&(Year%100==0)&&(Year%400==0))
    printf("Leap Year : %d",Year);
    else
    printf("Not Leap Year :%d",Year);
    return 0;

}
