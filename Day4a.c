//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.

#include<stdio.h>
void main() {
    float length, radius, base, height;
    
    printf("\n Area of a Square ");
    printf("\n Enter the required length of a side of the square: ");
    scanf("%f", &length);
    printf("\n The Area of the  Square is : %.2f ",length*length);

    printf("\n \n Area of a Circle ");
    printf("\n Enter the required radius of the circle: ");
    scanf("%f", &radius);
    printf("\n The Area of the  Circle is : %.2f ", 3.14 * radius * radius);

    printf("\n \n Area of a Triangle ");
    printf("\n Enter the required length of the base and height of the triangle: ");
    scanf("%f %f", &base,&height);
    printf("\n The Area of the  Triangle is : %.2f ", 0.5 * base * height);
}