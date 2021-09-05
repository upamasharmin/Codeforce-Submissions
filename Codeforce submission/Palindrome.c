#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i,reverse=0,remainder,temp;
    printf("Enter an integer: ");
    scanf("%d",&i);
    temp=i;
    while(temp!=0)
    {
        remainder = temp%10;
        reverse= reverse * 10 + remainder;
        temp /= 10;

    }
    printf("Reversed number: %d\n",reverse);

    if(reverse==i)

        printf("%d is a palindrome number",i);
    else
        printf("%d is not a palindrome number",i);

        return 0;

}
