//WACP to check if a number is a palindrome or not

#include<stdio.h>

void main() {
    int n,num,rnum = 0,remainder;
    printf("\"Enter the number : ");
    scanf("%d",&n);
    num = n;
    
    while(num != 0) 
    {
        remainder = num % 10;
        rnum = rnum*10 + remainder;
        num = num/10;
    }

    if(n == rnum) {
        printf("\n %d is a palindrome",n);
    }
    else {
        printf("\n %d is not a palindrome", n);
    }

}