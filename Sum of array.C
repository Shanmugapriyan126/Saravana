#include<stdio.h>
void main()
{
    int n,k,a[100],sum=0;
    printf("Enter the numbers:");
    scanf("%d",&n);
    printf("Enter the limitation:");
    scanf("%d",&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=k;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of K values is %d",sum);
}
