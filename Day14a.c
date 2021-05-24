#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100],a;
    int n,count = 0;
    scanf("%[^\n]%*c", str);
    n= strlen(str);
    scanf("%c",&a);
    for (int i = 0;i < n;i++) {
        if(a == str[i]) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
