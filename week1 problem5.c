#include<stdio.h>
void main()
{
    int num,multi;
    scanf("%d", &num);
    int i=1;
    while(i<=10)
    {
        multi = num*i;
        printf("%d * %d =%d\n",num,i,multi);
        i++;
    }

}

