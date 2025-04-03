#include<stdio.h>
int main(){
    int a,b,add,sub,mul,div,rem,c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter case: add(1), subtract(2), multiply(3), divide(4), remainder(5): ");
    scanf("%d", &c);
    switch (c){
        case 1:
            add = a + b;
            printf("The addtion of two entered numbers is: %d\n", add);
            break;
        case 2:
            sub = a - b;
            printf("The subtraction of two entered numbers is: %d\n", sub);
            break;
        case 3:
            mul = a * b;
            printf("The multiplication of two entered numbers is: %d\n", mul);
            break;
        case 4:
            div = a / b;
            printf("The division of two entered numbers is: %d\n", div);
            break;
        case 5:
            rem = a % b;
            printf("The remainder of two entered numbers is: %d\n", rem);
            break;
        default:
            printf("Invalid");
            break;
    }
    return 0;
}