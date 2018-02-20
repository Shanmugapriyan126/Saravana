#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[100];
	int i,l,sum=0,count1;
	printf("Enter the string:");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s>='0'||s<='9')
		sum++;
	}
	if(sum==l)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
