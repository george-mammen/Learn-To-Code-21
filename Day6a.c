/*In a sequence of numbers from 1 - 100, replace the numbers divisble by 3 with Fizz, 
replace the numbers divisble by 5 with Buzz and replace the numbers divisble by 15 with FizzBuzz and print the result.*/

#include<stdio.h>

void main() {
    for (int i = 1; i <= 100;i++) {
        if( i % 15 == 0) {
            printf("FizzBuzz ");
        }
        else if ( i % 5 == 0) {
            printf("Buzz ");
        }
        else if (i % 3 == 0) {
            printf("Fizz ");
        }
        else {
            printf("%d ", i);
        }
    }
}