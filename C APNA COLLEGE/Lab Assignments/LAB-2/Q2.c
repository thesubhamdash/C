#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if ((n % 3 == 0) && (n % 7 == 0)){
        printf("%d is divisible by 3 and 7\n", n);
    }
    else if (n % 7 == 0){
        printf("%d is divisible by 7\n", n);
    }
    else if (n % 3 == 0){
        printf("%d is divisible by 3\n", n);
    }
    else{
        printf("Not divisible by 3 and 7");
    }
    return 0;
}