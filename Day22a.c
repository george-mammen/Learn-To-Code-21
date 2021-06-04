#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
        
    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            if(arr[i] == arr[j]) {
                arr[j] = arr[0];
            }
            if(arr[i] > arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d",arr[n-2]);
}
