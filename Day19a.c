#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a,b;

void change(int a,int b){
    printf("a=%d b=%d\n",a,b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d",a,b);
}

int main() {
    scanf("%d %d",&a,&b);
    change(a,b);
}
