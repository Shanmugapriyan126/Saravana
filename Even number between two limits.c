#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the two numbers:");
    scanf("%d%d",&x,&y);
    for(int i=x+1;i<y;i++)
    {
        if(i%2==0)
        {
            printf("\t%d",i);
        }
    }
}
