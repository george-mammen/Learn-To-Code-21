//Write a C Program to display the fibonacci series upto n terms.

#include<stdio.h>

void main () {
    int n,a = 0,b = 1;
    int c = a + b;
    printf("\n Enter the number of terms to generate the fibonacci series: ");
    scanf("%d",&n);
    printf("\n %d %d", a,b);

    for (int i = 1 ; i < n; i++ ) {
        printf(" %d",c);
        a = b;
        b = c;
        c = a + b;
    }
}