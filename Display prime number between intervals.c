#include<stdio.h>
void main()
{
    int i,j,a,b;
    printf("Enter the intervals:");
    scanf("%d%d",&a,&b);
    while(a<b)
    {
        j=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                j=1;
                break;
            }
        }
        if(j==0)
            printf("\n%d",a);
            ++a;
    }
    return 0;
}
