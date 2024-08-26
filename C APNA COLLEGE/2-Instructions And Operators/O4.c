#include<stdio.h>
int main()
{
    //Assignment Operator
    int a= 1,b=2;
    a = b;
    printf("%d \n", a);

    // a= a+b;
    a += b;
    printf("%d \n", a);

    //a=a-b
    a -= b;
    printf("%d \n", a);

    //a=a*b
    a *= b;
    printf("%d \n", a);

    //a=a/b
    a /= b;
    printf("%d \n", a);
    return 0;
}