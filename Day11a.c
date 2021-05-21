#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a = 0;
    int b = 1;
    int c,n;
    printf("%d %d ",a,b);
    scanf("%d",&n);
    for(int i = 1; i <= n-2; i++) {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
