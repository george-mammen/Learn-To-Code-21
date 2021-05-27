#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr1[10][10],arr2[10][10],arr3[10][10];
    int i,j,r1,c1,r2,c2;
    
    scanf("%d %d",&r1,&c1);
    for(i = 0; i < r1;i++) {
        for(j = 0; j < c1;j++) {
               scanf("%d",&arr1[i][j]); 
        }
    }
    
    scanf("%d %d",&r2,&c2);
    for(i = 0; i < r2;i++) {
        for(j = 0; j < c2;j++) {
               scanf("%d",&arr2[i][j]); 
        }
    }
    
    if(c1 == r2) {
        for(i = 0; i < r1;i++) {
            for(j = 0; j < c2;j++) {
                arr3[i][j] = 0;
                for(int k = 0;k < c1;k++) {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
                printf("%d ",arr3[i][j]);    
            }
            printf("\n");
        }
    }
    else {
        printf("ERROR");
    }
}
