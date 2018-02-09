#include <stdio.h>
#include <math.h>

int main()
{
    int a,b, i,c,d,e,n = 0,f= 0;
    printf("Enter the numbers:");
    scanf("%d %d", &a, &b);
    printf("Armstrong numbers between %d an %d are: ",a,b);
    for(i=a+1;i<b;++i)
    {
        c=i;
        d=i;
        while (c!=0)
        {
            c/=10;
            ++n;
        }
        while (d!=0)
        {
            e=d%10;
            f=f+pow(e,n);
            d=d/10;
        }
        if (f==i) {
            printf("%d",i);
        }
        n=0;
        f=0;
    }
    return 0;
}
