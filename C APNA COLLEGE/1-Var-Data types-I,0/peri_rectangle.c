#include<stdio.h>
int main()
{
    int l,b,peri;
    printf("Enter length and breadth: \n",l,b),
    scanf("%d %d", &l, &b);
    peri = 2*(l+b);
    printf("%d is the perimeter of rectangle", peri);
    return 0;
}