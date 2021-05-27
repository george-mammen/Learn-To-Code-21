#include<stdio.h>
int main() {
    int m,n,arr[10][10],num,temp = 0;
    scanf("%d %d",&m,&n);
    for(int i = 0; i < m;i++) {
        for(int j = 0; j < n;j++) {
            scanf("%d",&arr[i][j]);
       }
    }
    scanf("%d",&num);
    for(int i = 0; i < m;i++) {
        for(int j = 0; j < n;j++) {
            if (arr[i][j] == num) {
                printf("Element found at (%d,%d)\n",i,j);
                temp++;
            }
        }
    }
    if(temp == 0) {
        printf("Element not found");
    }
}
