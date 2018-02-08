#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d=0;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        d=d+c*c*c;
        b=b/10;
    }
    if(a==d)
    {
        printf("The number is an armstrong");
    }
    else
    {
        printf("The number is not an armstrong");
    }
}
