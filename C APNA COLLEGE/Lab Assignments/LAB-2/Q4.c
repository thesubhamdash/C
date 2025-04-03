#include<stdio.h>
int main(){
    int a,b,add,sub,mul,div,c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter case: add(1), subtract(2), multiply(3), divide(4): ");
    scanf("%d", &c);
    switch (c){
        case 1:
            add = a + b;
            printf("The addtion of two entered numbers is: %d\n", add);
            break;
        case 2:
            add = a - b;
            printf("The subtraction of two entered numbers is: %d\n", add);
            break;
        case 3:
            add = a * b;
            printf("The multiplication of two entered numbers is: %d\n", add);
            break;
        case 4:
            div = a / b;
            printf("The division of two entered numbers is: %d\n", div);
            break;
        default:
            printf("Invalid");
            break;
    }
    return 0;
}