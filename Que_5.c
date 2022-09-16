//display sum of digit
#include<stdio.h>
int main()
{
    int n,m,sum=0;
    printf("enter the digit");
    scanf("%d",&n);
    while(n>0)
    {
    m=n%10;
    sum=sum+m;
    n=n/10;
    }
    printf("sum of digit is:%d",sum);

    return 0;

}