//3.swap two number using third variable
#include<stdio.h>
int main()
{
    int val_1,val_2,val_temp;

    printf("Enter first value:");
    scanf("%d",&val_1);
    printf("Enter second value:");
    scanf("%d",&val_2);

    val_temp=val_1;
    val_1=val_2;
    val_2=val_temp;

    printf("First value after swaping: %d \n",val_1);
    printf("Second value after swaping: %d",val_2);

    return 0;
}