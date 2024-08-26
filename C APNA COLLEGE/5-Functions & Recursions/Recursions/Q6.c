//Fibonacci Sequence [nth term]

#include<stdio.h>
#include<conio.h>

int fibonacci (int n);

int main()
{
    printf("%d", fibonacci(6));
    return 0;
}

int fibonacci (int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }

    int fibNm1 = fibonacci(n-1);
    int fibNm2 = fibonacci(n-2);
    int fibN = fibNm1 + fibNm2;
    // printf("The fibonacci of %d is: %d \n", n, fibN);
    return fibN;
}