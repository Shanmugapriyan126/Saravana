#include<stdio.h>
void main()
{
    int a,i,b=1;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=a*i;
        printf("\n%d",b);
    }
}
