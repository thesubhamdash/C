//Function to convert celcius to fahrenheit
#include<stdio.h>
#include<conio.h>

float convertTem (float celcius);

int main()
{
    printf("The temperature in fahrenheit is: %f", convertTem(37.0));
    return 0;
}

float convertTem (float celcius)
{
    float fahrenheit = celcius * (9.0/5.0) + 32.0;
    return fahrenheit;
}