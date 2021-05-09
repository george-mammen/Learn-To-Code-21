//WACP to find the maximum and minimum from three user inputted numbers.

#include <stdio.h>

void main()
{
    int a,b,c;
    printf("\n Enter the three numbers : ");
    scanf("%d %d %d", &a,&b,&c);

    if(a > b && a > c) {
        printf("\n %d is the highest number.",a);
    }
    else if (b > a && b > c) {
        printf("\n %d is the highest number.", b);
    }
    else {
        printf("\n %d is the highest number.", c);
    }

    if (a < b && a < c)
    {
        printf("\n %d is the lowest number.", a);
    }
    else if (b < a && b < c)
    {
        printf("\n %d is the lowest number.", b);
    }
    else
    {
        printf("\n %d is the lowest number.", c);
    }
}
