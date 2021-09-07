#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c;
    float r1,r2;
    float determinant;
    scanf("%f %f %f", &a,&b,&c);
    determinant = (b*b) - (4*a*c);
    
    if(determinant > 0) {
        r1 = (-b + sqrt(determinant))/(2*a);
        r2 = (-b - sqrt(determinant))/(2*a);
        printf("Distinct Real : %.2f , %.2f",r1,r2);
    }
    else if(determinant == 0) {
        r1 = r2 = -b/(2*a);
        printf("Equal Real: %.2f , %.2f",r1,r2);
    }
    else {
        r1= -(b/(2*a));
        r2= sqrt(-determinant)/(2*a);
        printf("Complex: %.2f + i%.2f , %.2f - i%.2f",r1,r2,r1,r2);
    }
}

