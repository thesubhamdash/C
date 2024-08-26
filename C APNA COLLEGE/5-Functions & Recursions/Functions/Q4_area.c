#include<stdio.h>

void areaSquare(int side);
void areaRectangle(int length, int breadth);
void areaCircle(float radius);

int main()
{
    int side,length,breadth,radius;
    printf("Enter side: ");
    scanf("%d", &side);
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);
    printf("Enter radius: ");
    scanf("%d", &radius);
    areaSquare(side);
    areaRectangle(length,breadth);
    areaCircle(radius);
}

void areaSquare(int side)
{
    int area = side * side;
    printf("The area of square is: %d\n", area);
}

void areaRectangle(int length, int breadth)
{
    int area = length * breadth;
    printf("The area of rectangle is: %d\n", area);
}

void areaCircle(float radius)
{
    float area = 3.14 * radius * radius;
    printf("The area of circle is: %f\n", area);
}