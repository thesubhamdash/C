#include<stdio.h>
int main()
{
    printf("%d \n", 5%2);
    printf("%d \n", -5%2);

    int a=2,b=2;
    int c = a + b;
    printf("%d \n", c);

    int d=2;
    float e= 1.5;
                                    // printf("%d", d*e); gives 0
    printf("%f", d*e);              //gives 3.000000
    return 0;
}