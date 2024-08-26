#include<stdio.h>
int main()
{
    int a,b,c,avg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    avg = (a+b+c)/3;
    printf("The average of three numbers is: %d \n", avg);
    return 0;
}