#include<stdio.h>
#include<conio.h>

void MaxNum(int *a, int *b);

int main()
{
    int a = 3, b = 5;
    MaxNum(&a,&b);
    return 0;
}


void MaxNum(int *a, int *b)
{
    if (*a > *b)
    {
        printf("%d is greater", *a);
    }
    else
    {
        printf("%d is greater", *b);
    }
}