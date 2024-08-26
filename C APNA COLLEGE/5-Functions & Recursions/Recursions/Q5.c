//Function to calculate percentage of marks obtained from 3 subjects

#include<stdio.h>
#include<conio.h>

float Cal_Percentage (int S1, int S2, int S3);

int main()
{
    int S1=95,S2=95,S3=95;
    printf("The obtained percentage is: %f", Cal_Percentage(S1,S2,S3));
    return 0;
}

float Cal_Percentage (int S1, int S2, int S3)
{
    float percentage = (S1+S2+S3) * 100 / 300;
    return percentage;  
}