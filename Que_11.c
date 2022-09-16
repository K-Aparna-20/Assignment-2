/* input: enter number=234
   output:sum=9
          new number=2349 
*/
#include<stdio.h>
int main()
{
    int n,t,sum=0,remainder;
    printf("enter the digit");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
    remainder=t%10;
    sum=sum+remainder;
    t=t/10;
    }
    printf("sum of digit is:%d\n",sum);
    printf("new digit is: %d%d",n,sum);

    return 0;

}