#include<stdio.h>

void printTable(int n);     // parameter is n

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printTable(n);          // n is argument/actual parameter
}

void printTable(int n)      // parameter/formal parameter
{
    for (int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", n,i,n*i);
    }
}