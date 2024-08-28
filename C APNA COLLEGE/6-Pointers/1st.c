#include<stdio.h>
#include<conio.h>

        // POINTER IS A VARIABLE THAT STORES THE ADDRESS OF ANOTHER VARIABLE

int main()
{
    int age = 22;       //an integer value is stored
    int *ptr = &age;    // address of the variable 'age' is stored in the pointer variable ptr[That is why '*' is used]
    int _age = *ptr;    // *ptr will search the address that is stored in it and find the actual value stored in the same address and store the same value in the new variable.
    
    
    printf("%d\n", _age);   //prints the integer value stored in the variable

    printf("%u\n", &age);   // "&" prints the address where the integer value is stored 
    printf("%u\n", ptr);    // prints the address of the stored variable as "ptr" is a pointer variable
    printf("%p\n", &ptr);   // prints the address of the pointer variable that stores the address of another variable.
}