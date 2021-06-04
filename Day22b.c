#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c", str);
    int vcount = 0,ccount = 0,scount = 0;
    for(int i = 0;i < strlen(str);i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vcount++;
        else if(str[i] == ' ')
            scount++;
        else 
            ccount++;
    }
    printf("%d\n%d\n%d",vcount,ccount,scount);
}
