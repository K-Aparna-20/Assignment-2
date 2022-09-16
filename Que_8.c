//odd or even using bitwise
#include<stdio.h>
int main()
{
    int n;
    printf("enter th number: ");
    scanf("%d",&n);
    if(n & 1)
      printf("number is odd");
    else
      printf("number is even");
}