#include<stdio.h>
#include<conio.h>

void square(int n);
void _square(int *n);

int main()
{
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);
    return 0;
}

//Call by Value
// Any change in this sub-function doesn't change anything in the main function.
void square(int n)
{
    n = n * n;
    printf("Square = %d\n", n); 
}

//Call by Reference
// Any change here will be changed in the main function in same way. It is because we've taken pointer[address of the variable]     
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}