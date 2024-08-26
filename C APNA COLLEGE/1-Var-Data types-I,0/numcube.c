#include<stdio.h>
int main ()
{
    int n,cube;
    printf("Enter a number: \n",n);
    scanf("%d", &n);
    cube = n*n*n;
    printf("The cube of entered number is : %d", cube);
    return 0;
}