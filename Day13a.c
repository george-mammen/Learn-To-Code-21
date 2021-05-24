#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,num,arr[10],temp =0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);    
    for(int i = 0;i < n;i++) {
        if (arr[i] == num) {
            printf("%d is present in this array",num);
            temp = 1;
            break;
        }
    }
    if(temp == 0) {
        printf("%d is not present in this array",num);
    }
}
