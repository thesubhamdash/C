//prime numbers of required range
#include<stdio.h>
int main()
{
    int a,b,i,j,c;
    printf("Enter the range: ");
    scanf("%d %d", &a, &b);

    for(i=a; i<=b; i++)
    {
        c=0;        // c is made zero so that the count resets after printing the prime number in the loop
        for(j=1; j<=b; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c==2)
        {
            printf("%d\n", i);
        }
    }
}