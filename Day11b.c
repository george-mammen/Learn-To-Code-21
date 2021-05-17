//WACP to print the HCF of 2 numbers.

#include<stdio.h>

void main() {
    int a,b,hcf,i;
    printf("\n Enter the two numbers : ");
    scanf("%d %d",&a,&b);

    for(i = 1; i <= a || i <= b; i++) {
        if ( a%i == 0 && b%i == 0) {
            hcf = i;
        }
    }

    printf("\n The HCF of %d and %d is %d.",a,b,hcf);
}