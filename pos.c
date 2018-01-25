#include <stdio.h>

void main()
{
    int N;
    printf("Enter the number N:");
    scanf("%d",&N);
    if(0<N)
    {
        printf("Number is positive");
    }
         else if(0>N)
         {
            printf("Number is negative");
         }
    else
    {
        printf("Number is zero");
    }
}
