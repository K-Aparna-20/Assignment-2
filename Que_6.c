//takes character as input & display ASCII code

#include<stdio.h>
int main()
{
    char c;
    printf("enter the character ");
    scanf("%c",&c);
    printf("ASCII code of %c = %d",c,c);
    return 0;
}