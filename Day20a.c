#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n,sum = 0,rem = 0;

void Armstrong(int n) {
    int num = n;
    while(n != 0) {
        rem = (n % 10);
        sum += rem * rem * rem;
        n = n/10;
    }
    if(num == sum) {
        printf("Amstrong");
    }
    else {
        printf("Not Amstrong");
    }
}


int main() {
    scanf("%d",&n);
    Armstrong(n);
}
