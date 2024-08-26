// Armstrong Number
#include<stdio.h>
int main()
{
    int n,a,sum=0,new;
    printf("Enter any 3 digit number: \n");
    scanf("%d", &n);
    new=n;
    while (n!=0)
    {
        a = n%10;
        sum = sum + (a*a*a);
        n=n/10;
    }
    if (sum==new)
    {
        printf("Armstrong \n");
    }
    else
    {
        printf("Not Armstrong \n");
    }
    return 0;
}
    
    