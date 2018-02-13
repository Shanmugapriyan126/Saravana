#include<stdio.h>
void main()
{
    int N[10],n,a,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    scanf("%d",&N[n]);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    for(int i=1;i<n;i++)
    {
            if(N[0]>N[i])
            {
                N[0]=N[i];
            }
    }
    printf("\n %d is minimum",N[i]);
}
