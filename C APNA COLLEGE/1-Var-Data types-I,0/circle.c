#include<stdio.h>
#include<math.h>
int main ()
{
    float r,area;
    printf("Enter radius of circle");
    scanf("%f",&r);

    area = 3.14 * pow(r,2);
    // area = 3.14 * r * r;
    
    printf ("The area is %f", area);
    return 0;
}