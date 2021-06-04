#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n,fact = 1;

int factorial(int n) {
    if (n == 0) {
        fact = 1;
    }
    else {
        fact = n * factorial(n-1);
    }
    return fact;
}

int main() {
    scanf("%d",&n);
    if(n < 0) {
        printf("ERROR");
    }
    else {
        fact = factorial(n);
        printf("%d",fact);
    }
}
