//Write a C Program to convert Fahrenheit to Celsius.

#include<stdio.h>

void main() {
    float fahrenheit, celsius;
    printf("\n Enter the temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32) * (5 / 9);
    printf("\n The corresponding value of %.2f fahrenheit is %.2f celsius.", fahrenheit,celsius);
}