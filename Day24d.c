#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,count = 0;
    int op1,op2,op3;
    printf("press 1 to start the game\npress 0 to exit");
    scanf("%d",&n);
    
    if(n == 1) {
        printf("\nbiggest animal(1.elephant2.lion3.dog)");
        scanf("%d",&op1);
        if(op1 == 1) {
            count++;
        }
        printf("\nsatellite of earth(1.jupiter2.moon3.sun)");
        scanf("%d",&op2);
        if(op2 == 2) {
            count++;
        }
        printf("\nwhich is not a vowel(1.a2.e3.q)");
        scanf("%d",&op3);
        if(op3 == 3) {
            count++;
        }
    }
    printf("\nyour score is %d",count);
    return 0;
}
