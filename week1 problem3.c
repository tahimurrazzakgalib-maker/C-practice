#include<stdio.h>
void main()
{
    printf("Enter your number:");
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive",num);
    }
    else if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("num is ZERO");

    }



}
