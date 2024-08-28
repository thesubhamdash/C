#include<stdio.h>
#include<conio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main()
{
    int a = 3, b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("Sum: %d\n", sum);
    printf("Sum: %d\n", prod);
    printf("Sum: %d\n", avg);
    return 0;
}

        // If multiple values are required to be returned in the main function, pass by reference is done.

void doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a*b;
    *avg = (a+b)/2;
}