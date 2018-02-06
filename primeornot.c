#include<stdio.h>
void main()
{
    int n,i,k=0,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        j=n%i;
        if(j==0)
        {
            k++;
        }
    }
    if(k==0||k==1)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not a prime number");
    }
}
