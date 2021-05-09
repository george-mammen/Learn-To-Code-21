/* WACP to input marks of three subjects Physics, Chemistry and Maths. Calculate the percentage and respective grade according to following:
    Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F */

#include<stdio.h> 

void main() {
    float mark1,mark2,mark3,avg;
    printf("\n Enter the marks received for Physics: ");
    scanf("%f",&mark1);
    printf("\n Enter the marks received for Chemistry: ");
    scanf("%f", &mark2);
    printf("\n Enter the marks received for Maths: ");
    scanf("%f", &mark3);
    avg = (mark1 + mark2 + mark3) / 3;
    printf("\n The respective percentage obtained = %.2f \n ", avg);

    if(avg >= 90) {
        printf("\n The obtained grade is A.");
    }
    else if (avg >= 80)
    {
        printf("\n The obtained grade is B.");
    }
    else if (avg >= 70)
    {
        printf("\n The obtained grade is C.");
    }
    else if (avg >= 60)
    {
        printf("\n The obtained grade is D.");
    }
    else if (avg >= 40)
    {
        printf("\n The obtained grade is E.");
    }
    else if(avg < 40) {
        printf("\n The obtained grade is F.");
    }
}