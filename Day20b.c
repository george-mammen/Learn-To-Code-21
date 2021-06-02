#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
char str[100];

void revstr(char str[]) {
        for(int i = strlen(str)-1;i >= 0 ;i--)
    {
        printf("%c",str[i]);
    }
}

void words(char str[]) {
    int word = 0;
    for(int i = 0; i < strlen(str);i++) {
            if(str[i] == ' '  || str[i] == '\n') {
                word++;
            }
        }
    if(word == 0) {
        printf("no of words = %d\n",word);
    }
    else {
        printf("no of words = %d\n",word + 1);
    }
}

int main() {
    scanf("%[^\n]%*c", str);
    words(str);
    revstr(str);
}}
