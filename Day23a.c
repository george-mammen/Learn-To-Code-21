#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("DISPLAYING USING INDEX: ");
    for(int i = 0; i < n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\nDISPLAYING USING POINTERS: ");
    for(int i = 0; i < n;i++) {
        printf("%d ",*(arr + i));
    }
}
