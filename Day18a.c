#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n > 0) {
        for(int i = 1; i <= n;i++) {
            for(int j = 1; j <= i;j++) {
                printf("%d ",j);
            }
        printf("\n");
        }
    } 
    else{
        printf("ERROR");
    }

    return 0;
}
