#include<stdio.h>
void main()
{
    char N;
    printf("Enter the character:");
    scanf("%c",&N);
    if(N=='a'||N=='e'||N=='i'||N=='o'||N=='u'||N=='A'||N=='E'||N=='I'||N=='O'||N=='U')
    {
        printf("The character is vowel");
        
    }
    else
    {
        printf("The character is consonant");
    }
}
