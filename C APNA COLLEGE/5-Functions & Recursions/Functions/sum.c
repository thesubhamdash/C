#include<stdio.h>

int sum(int a,int b);

int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int s = sum(a, b);          // when function is called, the values get copied to the defined function so variable can be changed in function definition
    printf("sum is : %d\n", s);
    return 0;
}

int sum(int x,int y)        // can be other variable as well
{
    return x + y;
}