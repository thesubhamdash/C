// sum of first n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        sum = sum + i;
        printf("%d \n", i);
    }
    printf("The sum is %d \n", sum);

    // for (i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("The sum is %d \n", sum);

    // for ( i = n; i >= 1 ; i--)
    // {
    //     printf("%d \n", i);
    // }
    return 0;
}