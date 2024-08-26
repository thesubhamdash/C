#include<stdio.h>
int main()
{
                            //ARITHMETIC OPERATORS
    int a = (int) 1.999999;
    printf ("%d \n", a);

    // precedence *,/,% >------> +,- >------> =
    
    int b = 4 + 9 * 10;
    printf("%d \n", b);
    
    int c = 4 * 3/6 * 2;    //[Associativity for same precedence] -----> Left to right
    printf("%d \n", c);

    int d = 5 * (2/2) * 3;
    printf("%d \n", d);

    int e = 5 + 2/2 * 3;
    printf("%d \n", e);

    return 0;
}