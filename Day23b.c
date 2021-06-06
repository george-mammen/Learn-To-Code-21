#include<stdio.h>

struct student{
    int rollno;
    char firstname[100];
    float marks;
}; 

int main()
{
    struct student stud[4];
    
    for( int i=0 ; i<4 ; i++)
    {
        scanf("%d",&stud[i].rollno);
        scanf("%s",stud[i].firstname);           
        scanf("%f",&stud[i].marks);
    }
    for( int i=0 ; i<4 ; i++)
    {
        printf("DETAILS OF ROLLNO %d\n",stud[i].rollno);
        printf("NAME: %s\nMARKS: %.2f\n" ,stud[i].firstname ,stud[i].marks);
    }
    printf("\n");
    return 0;
}
