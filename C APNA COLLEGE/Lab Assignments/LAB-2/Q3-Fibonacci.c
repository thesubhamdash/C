#include<stdio.h>
int main(){
    int a,b,c,d;
    a=0;
    b=1;
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 2; i < 10; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;    
}