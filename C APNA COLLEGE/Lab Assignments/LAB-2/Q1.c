// WAP to check palindrome number:
#include<stdio.h>
int main(){
    int n,a,sum=0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    int num = n;
    while (n!=0)
    {
        
        a = n % 10;
        sum = sum*10 + a;
        n /= 10;
    }
    if (num == sum)
    {
        printf("%d is palindrome\n", num);
    }
    else
    {
        printf("%d is not palindrome\n", num);
    }
    return 0;
}