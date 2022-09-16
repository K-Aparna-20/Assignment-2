//print size of int,float,char,double
#include<stdio.h>
int main()
{
    int int_size;
    float float_size;
    char char_size;
    double double_size;
    printf("size of int is %zu bytes\n",sizeof(int_size));
    printf("size of float is %zu bytes\n",sizeof(float_size));
    printf("size of char is %zu bytes\n",sizeof(char_size));
    printf("size of double is %zu bytes",sizeof(double_size));

    return 0;
}