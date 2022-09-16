//4.swap two number using bitwise operator
#include<stdio.h>
int main()
{
    int n1,n2;

    printf("Enter first value ");
    scanf("%d",n1);
    printf("Enter second ");
    scanf("%d",n2);

    printf("value of a=%d and value of b=%d",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("value after swaping");
    printf("value of a=%d and value of b=%d",n1,n2);
    return 0;
}