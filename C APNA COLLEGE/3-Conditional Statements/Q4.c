// Natural number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    if (n>=1 && n<=9)
    {
        printf("%d is natural number \n", n);
    }
    else
    {
        printf("%d is not a natural number \n", n);
    }
    return 0;
}