#include<stdio.h>
#include<math.h>

int square(int n);

int main()
{
    int n,sqr;
    printf("Enter a number: ");
    scanf("%d", &n);
    sqr = square(n);
    printf("The square is: %d\n",sqr);
    return 0;
}

int square(int n)
{
    return pow(n,2);
}