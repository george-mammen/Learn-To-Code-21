//Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers.

#include <stdio.h>

void main()
{
    int n,a,b;
    printf("\n Enter the 1st number : ");
    scanf("%d", &a);
    printf("\n Enter the 2nd number : ");
    scanf("%d", &b);
    printf("\n \n Operations to Perform on the Numbers :");
    printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    {
        printf("\n Adding %d and %d gives %d",a,b,a + b);
        break;
    }
    case 2:
    {
        printf("\n Subracting %d and %d gives %d", a, b, a - b);
        break;
    }
    case 3:
    {
        printf("\n Multiplying %d and %d gives %d", a, b, a * b);
        break;
    }
    case 4:
    {
        printf("\n Dividing %d on %d gives %.2f", a, b, a / (float)b);
        break;
    }
    default:
    {
        printf("\n Enter a valid option number ");
        break;
    }
    }
}