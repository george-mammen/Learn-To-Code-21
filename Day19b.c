#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a,b,sum;

void rev(int sum) {
    int rem,rsum = 0;
    printf("%d\n",sum);
    while (sum != 0)
    {
        rem = sum % 10;
        rsum = (rsum * 10) + rem;
        sum = sum / 10;
    }
    printf("%d",rsum);
}

void isprime(int sum) {
    printf("%d\n",sum);
    int temp = 0;
    for(int i = 2;i < sum;i++) {
        if(sum % i == 0) {
            temp++;
        }
    }
    if(temp == 0){
        printf("Prime");
    }
    else {
        printf("Not prime");
    }
}

int main() {
    scanf("%d %d",&a,&b);
    sum = a + b;
    if (sum % 2 == 0 ) {
        rev(sum);
    }
    else {
        isprime(sum);
    }
  
    return 0;
}
