#include<stdio.h>
#include<conio.h>

int main()
{
    int *ptr;
    int x;

    ptr = &x;   //This stores the address of "x" variable in the pointer variable
    *ptr = 0;   // i.e. x=0
    //ptr helps go to the address stored in it. * helps store "0" in the variable at that address.

    printf("x = %d\n", x);  //0
    printf("*ptr = %d\n", *ptr);   //0

    *ptr += 5;
    printf("x = %d\n", x);  //5
    printf("*ptr = %d\n", *ptr);   //5

    (*ptr)++;
    printf("x = %d\n", x);  //6
    printf("*ptr = %d\n", *ptr);   //6

    return 0;
}