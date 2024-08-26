#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    //Ternary Operator ---> Condition ? do this if true : do this if false
    age >= 18 ? printf("Eligible to vote") : printf("Not eligible to vote");       

    // if (age>18){
    //     printf("Adult");
    // }
    // else{
    //     printf("Child");
    // }
    return 0;
}
