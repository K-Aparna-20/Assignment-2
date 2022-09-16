//2.print number without unit digit
#include<stdio.h>
int main()
{
    int num,num2;
    printf("enter the number");
    scanf("%d",&num);
    num2=num/10;
    printf("%d without last digit is%d:",num,num2);   
return 0;
}