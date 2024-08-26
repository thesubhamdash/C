//sum of numbers from 5 to 50
#include<stdio.h>
int main()
{
    int i,sum=0;
    for (i = 5; i <=50; i++)
    {
        sum += i;
    }
    printf("The sum is: %d", sum);
}