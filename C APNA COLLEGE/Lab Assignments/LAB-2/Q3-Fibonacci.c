#include<stdio.h>
int main(){
    int a,b,c,n;
    printf("Enter the no. of terms for the series: ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;    
}