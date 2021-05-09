//WACP to perform all 4 basic Mathematical Calculations on two integers taken from user input.

#include<stdio.h>

void main() {
    int a,b;
    printf("\n Enter the 1st Integer : ");
    scanf("%d", &a);
    printf("\n Enter the 2nd Integer : ");
    scanf("%d", &b);
    printf("\n \n RESULTS ");
    printf("\n 1.Addition : %d",a+b);
    printf("\n 2.Subtraction : %d",a-b);
    printf("\n 3.Multiplication : %d",a*b);
    printf("\n 4.Division : %.2f",a/(float)b);
}