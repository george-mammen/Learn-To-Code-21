#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c", str);
    for(int i = 0;i < strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
        else if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("%s",str);
}
