#include<stdio.h>
void main()
{
    int N[10],n,a,i,j;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(N[i]>N[j])
            {
                a=N[i];
                N[i]=N[j];
                N[j]=a;
            }
        }
    }
    printf("\n Sorted Array Elements:");
    for(int i=0;i<n;i++)
    {
        printf("\n%d\t%u",N[i]);
    }
}
