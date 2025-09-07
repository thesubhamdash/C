#include<stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d", fact(n));
}

int fact(int n){
    int factorial=1;
    if(n == 0){
        return 1;
    }
    factorial *= fact(n-1) * n;
    return factorial;
}