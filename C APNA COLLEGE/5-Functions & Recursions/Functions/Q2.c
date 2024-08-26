#include<stdio.h>

void Namaste();
void Bonjour();

int main()
{
    printf("Enter N for Nepali & F for French: ");
    char user;
    scanf("%c", &user);
    if(user=='N'){
        Namaste();
    }
    else{ 
        Bonjour();
    }
    return 0;
}

void Namaste()
{
    printf("Namaste!\n");
    Bonjour();
}

void Bonjour()
{
    printf("Bonjour!\n");
}