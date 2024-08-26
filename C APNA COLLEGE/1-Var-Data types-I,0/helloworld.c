//print hello world
//not working for [int main]
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100];
    printf("Hello World! \n");
    printf("Enter your name.......");
    scanf("%s", name);
    printf("Hello World! \n");
    printf("Your name is %s \n", name);
    getch();
}