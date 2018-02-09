#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,d,t,i,sum=0;
    printf("Enter the numbers:");
    scanf("%d%d%d",&n,&a,&d);
    t=a+(n-1)*d;
    sum=(n*(2*a+(n-1)*d))/2;
    printf("\nThe value is %d",t);
    printf("\nThe sum value is %d",sum);
}
