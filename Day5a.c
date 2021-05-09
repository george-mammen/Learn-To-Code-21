//Write a C Program to verify if a given year is a leap year or not. ('%' operation).

#include<stdio.h>

void main() {
    int year;
    printf("\n Enter the required year : ");
    scanf("%d",&year);
    
    if (year % 400 == 0) {
        printf("\n %d is a leap year.",year);
    }
    else if (year % 4 == 0) {
        if (year % 100 == 0) {
            printf("\n %d is not a leap year.", year);
        }
        else {
            printf("\n %d is a leap year.", year);
        }
    }
    else
        {
            printf("\n %d is not a leap year. ", year);
        }
}