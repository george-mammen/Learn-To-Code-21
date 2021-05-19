//WACP to print the multiplication table of numbers 1 - 5.

#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("\n1.Table of 1 \n2.Table of 2 \n3.Table of 3 \n4.Table of 4 \n5.Table of 5 \n6.Exit \n ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("%d ", n * i);
            }
            break;
        }
        case 2:
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("%d ", n * i);
            }
            break;
        }
        case 3:
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("%d ", n * i);
            }
            break;
        }
        case 4:
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("%d ", n * i);
            }
            break;
        }
        case 5:
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("%d ", n * i);
            }
            break;
        }
        case 6:
        {
            exit(0);
        }
        default:
        {
            printf("Enter a valid option!");
        }
        }
    } while (1);
}