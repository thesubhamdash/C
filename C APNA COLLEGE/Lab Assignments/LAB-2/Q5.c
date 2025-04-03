#include<stdio.h>
int main(){
    int n,last,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        while (n!=0)
        {
            last = n % 10;
            sum += last;
            n /= 10;
        }
        n = sum;
        sum = 0;
    } while (n/10 != 0);
    printf("Sigle digit is: %d", n);
    return 0;
}