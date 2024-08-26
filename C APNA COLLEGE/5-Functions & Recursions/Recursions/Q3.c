#include<stdio.h>

int fact (int n);

int main (){
    printf("The factorial is: %d", fact(5));
    return 0;
}

//recursive function
int fact (int n) {
    // The if statement below is BASE CASE of Recursion
    //If the base case is not written in the recursion, stack overflows
    //i.e. the memory is completely filled and the program terminates.
    if (n==1){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}