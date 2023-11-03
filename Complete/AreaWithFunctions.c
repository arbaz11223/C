#include <stdio.h>
float areaSquare(float a);
float areaCircle(float r);
float areaRectangle(float l, float h);

int main()
{
    float side, radius, lenght, height;
    float areaofRectangle, areaofCircle, areaofSquare;

    printf("Enter Side of Square: ");
    scanf("%f", &side);
    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);
    printf("Enter Lenght of Rectangle: ");
    scanf("%f", &lenght);
    printf("Enter Height of Rectangle: ");
    scanf("%f", &height);

    areaofSquare = areaSquare(side);
    printf("\nThe Area of Sqaure is %f", areaofSquare);
    areaofCircle = areaCircle(radius);
    printf("\nThe Area of Circle is %f", areaofCircle);
    areaofRectangle = areaRectangle(lenght, height);
    printf("\nThe Area of Rectangle is %f\n", areaofRectangle);

    return 0;
}

float areaSquare(float a)
{
    return a * a;
}

float areaCircle(float r)
{
    return 3.14 * r;
}

float areaRectangle(float l, float h)
{
    return l * h;
}
