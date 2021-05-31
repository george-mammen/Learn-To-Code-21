#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    scanf("%d",&n);
    if(n > 0) {
        for(i = 0;i <= n;i++) {
            for(int j = 0;j < i;j++) {
                printf("  ");
            }
            for(int j = 0;j <((2*n) - (i*2) - 1);j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    else {
        printf("ERROR");
    }
    return 0;
}
