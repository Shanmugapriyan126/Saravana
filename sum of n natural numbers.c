#include<stdio.h>
void main()
{
    int n,a=0;
    printf("Enter the natural numbers:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        a=a+i;
    }
    printf("%d",a);
}
