//Fibonacci Sequence [nth term]

#include<stdio.h>
#include<conio.h>

void fibonacci (int n);

int main()
{
    fibonacci(6);
    return 0;
}

void fibonacci (int n)
{
   int i,a,b,c;
    a=0;
    b=1;
    printf("%d ", a);
    printf(" %d ", b);
   for (i=0; i<=n; i++)
   {
        c = a + b;
        printf(" %d ", c); 
        a = b;
        b = c;
   }
   getch();
}