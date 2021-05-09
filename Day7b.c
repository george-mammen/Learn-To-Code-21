//WACP to determine if a triangle is valid taking it's sides as a factor

#include<stdio.h>

void main() {
    float side1,side2,side3;
    printf("\n Enter the length of the 1st side of the triangle: ");
    scanf("%f", &side1);
    printf("\n Enter the length of the 2nd side of the triangle: ");
    scanf("%f", &side2);
    printf("\n Enter the length of the 3rd side of the triangle: ");
    scanf("%f", &side3);

    if(((side1 + side2) > side3) && ((side1 + side3) > side2) && ((side3 + side2) > side1)) {
        printf("\n The lengths do form the sides of a triangle.");
    }
    else {
        printf("\n The lengths do not form the sides of a triangle.");
    }
}