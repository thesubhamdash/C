#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 11;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("i = %d\n", **pptr);  

    return 0;
}