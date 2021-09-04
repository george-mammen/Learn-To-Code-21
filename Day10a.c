/*Write a C program to print the following number pattern 
    55555 
     4444
      333
       22 
        1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = n ; i >= 1; i--)
    {
        for (int k = i ; k < n ; k++) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("hi");
}
