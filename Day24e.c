#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
  int a = 0,b = 1,c = 1,temp;
  scanf("%d",&n);
    
  for(int i = 2;i <= n-2;i++) {
    temp = 0;
    a = b;
    b = c;
    c = a + b;
    for(int j = 2;j <= c/2;j++) {
      if (c % j == 0) {
        temp = 1;
        break;
      }
    }
    if(temp == 0) {
      printf("%d is a fibo-prime.\n",c);
    }
    return 0;
}
