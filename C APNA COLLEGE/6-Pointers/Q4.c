#include<stdio.h>
#include<conio.h>

void printAddress(int n);

int main()
{
    int n = 4;
    printf("%p\n", &n);
    printAddress(n);
    return 0;
}

// Since, it is call by value, The sub-function is the copy of main one.

void printAddress(int n)        // Here, (int n) confirms that call by value
{                                       // For call by reference, pointer variable should be used in the main function.
    printf("%p\n", &n);
}

// Hence, The two different printf statement will have different output.