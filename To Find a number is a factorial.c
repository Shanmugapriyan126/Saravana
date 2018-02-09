#include<stdio.h>
void main()
{
    int a,i,fact=1;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("Error Factorial of negative number does not exists");
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        printf("Factorial:%d",fact);
    }
}
