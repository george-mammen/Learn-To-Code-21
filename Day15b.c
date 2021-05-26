#include<stdio.h>
int main() {
    int m,n,arr[10][10];
    scanf("%d %d",&m,&n);
    if(m == n) {
        for(int i = 0; i < m;i++) {
            for(int j = 0; j < n;j++) {
                scanf("%d",&arr[i][j]); 
            }
        }
        for(int i = 0; i < m;i++) {
            for(int j = 0; j < n;j++) {
                printf("%d ",arr[i][i]);
                break;
            }
        }
        printf("\n");
        for(int i = 0; i < m;i++) {
            for(int j = 0; j < n;j++) {
                if(i+j == n - 1) {
                    printf("%d ",arr[i][j]);
                }
            }
        }
    }
    else {
        printf("ERROR");
    }

}
