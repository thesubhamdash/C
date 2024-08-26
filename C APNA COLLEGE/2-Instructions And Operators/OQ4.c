//program to check id entered character is digit or not
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character");
    scanf("%c", &a);
    int b = (a>='0' && a<='9'); 
    printf("%d\n", b);
    return 0;
}


/* To check if character is a digit, it must be compared to character literals instead of numerical values 
    Likewise,
            '0' to '9'
            it shouldn't be 0 to 9  
*/