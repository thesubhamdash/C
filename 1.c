#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Lets Learn about pointer\n");
    int a=69;
    printf("The value of a is %d\n",a);
    int* b=&a;
    printf("The Address of a is %d\n",b);
    char c=getch();
    printf("char c is %c",c);
}