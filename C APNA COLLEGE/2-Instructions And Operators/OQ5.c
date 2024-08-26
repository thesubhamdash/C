#include<stdio.h>
int main()
{
    int a,b,c,s;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int d = printf("%d", a<b && a<c);
    return 0;
}