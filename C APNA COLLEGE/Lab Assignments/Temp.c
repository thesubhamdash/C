#include<stdio.h>

int main(){
    float Fah=0,Cel;
    printf("Enter a temp in Cecius");
    scanf("%f", &Cel);

    Fah = ((9*Cel)/5)+32;
    printf("Temp in Fahrenheit is: %f\n", Fah);

    Cel = (5*(Fah-32))/9;
    printf("Temp in Celcius is: %f\n", Cel);
    return 0;
}