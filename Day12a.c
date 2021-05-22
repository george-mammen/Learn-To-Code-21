#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[10] ={10,25,8,14,3,23,1,0,12,9};
    arr[2] = 30;
    printf("%d\n%d\n%d\n",arr[3],arr[9],arr[2]);
    for(int i = 0;i< 10;i++) {
        printf("%d ",arr[i]);
    }
}

