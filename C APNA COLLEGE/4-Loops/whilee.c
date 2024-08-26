#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    while (a<=n)
    {
        printf("%d \n", a);
        a++;
    }
    return 0;
}