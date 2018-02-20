#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the time in minutes:");
    scanf("%d",&a);
    b=a/60;
    c=a%60;
    printf("Hour in minute %d:%d",b,c);
}
