#include<stdio.h>
#include<math.h>
void main()
{
    int n,m,a,b;
    printf("Enter the number:");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    if(m==b)
    {
        printf("\n%d The number is a palindrome",b);
    }
    else
    {
        printf("\n%d The number is not a palindrome",b);
    }
}
