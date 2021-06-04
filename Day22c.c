#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n,count = 0;

int isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n;i++) {
        scanf("%d",&arr[i]);
        if(isPrime(arr[i]) == 0) {
            count++;
        }
    }
    printf("%d",count);
}
