//Program to check if entered character is upper case or lower case
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: \n");
    scanf("%c", &ch);
    
    if (ch>= 'A' && ch<= 'Z')
    {
        printf("Upper case \n");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("Lower case \n");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}