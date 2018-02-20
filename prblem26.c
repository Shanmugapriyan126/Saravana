#include<stdio.h>
void main()
{
    int A[10],n,C,i,j;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                C=A[i];
                A[i]=A[j];
                A[j]=C;
            }
        }
    }
    printf("\n Sorted Array Elements:");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",A[i]);
    }
}
