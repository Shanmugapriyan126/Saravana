#include<stdio.h>
void main()
{
    int N[10],n,a,i,j,c;
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
    c=n/2;
    for(i=0;i<n;i++)
    {
        if(N[i]==N[c])
        {
        printf("The median element is..");
        printf("%d\t", N[i]);
        }
    }
    return 0;
}
