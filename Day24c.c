#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,arrsum = 0,primesum = 0,count;
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        arrsum += arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        count=0;
        for(int j = 2; j <= arr[i]; j++)
        {
          if(arr[i] % j == 0)
          {
              count++;
          }
        }
        if(count == 1)
        {
          primesum += arr[i];  
        }
    }
    
    printf("%d",arrsum * (n - primesum));
    return 0;
}
