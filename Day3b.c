//WACP to read an integer and find it's square root. (<math.h> & sqrt function)
#include<stdio.h>
#include<math.h>

void main() {
    int n;
    float num;
    
    printf("\n Enter the Number to find the Square Root : ");
    scanf("%d", &n);
    printf("\n The Square Root of the number is : %.2f ", sqrt(n));
}