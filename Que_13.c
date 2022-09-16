/* input=489
   output=984 
*/
#include<stdio.h>
int main()
{
    int n,rev=0,remain;
    printf("enter the number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        remain=n%10;
        rev=rev*10+remain;
        n/=10;
    }
    printf("Reverse of digit is: %d",rev);
    return 0;
}