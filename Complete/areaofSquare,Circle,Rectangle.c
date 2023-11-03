#include <stdio.h>

void square();
void circle();
void rectangle();

int main() {
    float a,pi,r,lenght,height;
    pi=3.14;

    printf("Enter Details of Square :::: \n");
    printf("Enter Side of Square: ");
    scanf("%f",&a);

    printf("\nEnter Details of Circle ::::\n");
    printf("Enter Radius of Circle: ");
    scanf("%f",&r);

    printf("\nEnter Details of Rectangle ::::\n");
    printf("Enter Lenght: ");
    scanf("%f",&lenght);
    printf("Enter Height: ");
    scanf("%f",&height);

    float areaofS,areaofC,areaofR;

    areaofS = a*a;
    areaofC = pi*r*r;
    areaofR = lenght*height;

    printf("\nThe Area of Square is : %f",areaofS);
    printf("\nThe Area of Circle is : %f",areaofC);
    printf("\nThe Area of Rectangle is : %f\n",areaofR);
    
return 0;
}