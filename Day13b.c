#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[10],ocount = 0,ecount =0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            ecount++;
        }
        else {
            ocount++;
        }
    }
    printf("%d",ecount);
    printf("\n%d",ocount);
    
}
