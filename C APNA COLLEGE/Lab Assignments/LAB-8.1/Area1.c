#include<stdio.h>

int main(){
    int r,Area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    
    Area = 3.14 * r * r;
    printf("The area of given circle is %d", Area);
    return 0;
}