#include<stdio.h>

int main(){
    float Fah,Cel;
    int a;
    printf("Enter Temperaturre in Celcius(1) or Fahrenheit(2)?: ");
    scanf("%d", &a);
    switch (a){
        case 1:
            printf("Enter a temp in Cecius: ");
            scanf("%f", &Cel);
            Fah = ((9*Cel)/5)+32;
            printf("Temp in Fahrenheit is: %f\n", Fah);
            break;
    
        case 2:
            printf("Enter a temp in Fahrenheit: ");
            scanf("%f", &Fah);
            Cel = (5*(Fah-32))/9;
            printf("Temp in Celcius is: %f\n", Cel);
            break;

        default:
            printf("Invalid");
            break;
    }
    return 0;
}