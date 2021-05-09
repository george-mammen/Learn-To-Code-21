//WACP to perform Read and Print operations using the four basic data types in C. (int, float, char & double)

#include<stdio.h>

void main () {
    int a;
    float b;
    char c;
    double d;

    printf("\n Enter a character:  ");
    scanf("%c", &c);
    printf("\n Enter an integer:  ");
    scanf("%d", &a);
    printf("\n Enter a float value:  ");
    scanf("%f", &b);
    printf("\n Enter a Double value:  ");
    scanf("%lf", &d);

    printf(" Int Value : %d \n",a);
    printf(" Float Value : %f \n",b);
    printf(" Character : %c \n",c);
    printf(" Double Value : %lf \n",d);
}