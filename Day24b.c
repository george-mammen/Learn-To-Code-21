#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numqs,maxdiff,count = 0,score = 0;
    scanf("%d %d",&numqs,&maxdiff);
    int arr[numqs];
    for(int i = 0; i < numqs; i++) {
        scanf("%d",&arr[i]);
        if(count <= 1 && arr[i] <= maxdiff) {
            score++;
        }
        else if (count > 1){
            break;
        }
        else {
            count++;
        }
    }
    printf("Score = %d",score);
    return 0;
}
