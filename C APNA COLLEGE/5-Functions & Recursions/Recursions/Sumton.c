#include<stdio.h>

int Sum(int n);

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d", Sum(n));
    return 0;
}

int Sum(int n){
    int sum=0;
    if (n == 1){
        return 1;
    }
    sum += Sum(n-1) + n;
    return sum;
}