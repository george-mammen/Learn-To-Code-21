#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[10];
    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Entered array: ");
    for(int i = 0;i < n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n%d",arr[1]);
  
    return 0;
}
