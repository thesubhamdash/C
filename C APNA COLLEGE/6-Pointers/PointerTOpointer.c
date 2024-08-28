#include<stdio.h>
#include<conio.h>

    // PONITER TO PONITER IS A VARIABLE THAT STORES THE MEMORY ADDRESS OF A POINTER VARIABLE WHICH STORES THE ADDRESS OF A VARIABLE HAVING SOME VALUES STORED.

int main()
{
    float price = 100.00;

    //To declare a poniter variable, we use "*"
    float *ptr = &price;
    
    // To declare a pointer to poniter, we use "**"
    float **pptr = &ptr;    


    return 0;
}