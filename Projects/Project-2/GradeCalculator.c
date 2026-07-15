#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter Your Score: ");
    scanf("%d", &marks);

    grade = (marks >= 90) ? 'A' :
            (marks >= 70) ? 'B' :
            (marks >= 50) ? 'C' :
            (marks >= 33) ? 'D' : 'F';

    printf("Your Grade is %c. ", grade);

    switch (grade)
    {
        case 'A':
            printf("Excellent Work! ");
            break;

        case 'B':
            printf("Well Done. ");
            break;

        case 'C':
            printf("Good Job. ");
            break;

        case 'D':
            printf("You passed, but you could do better. ");
            break;

        case 'F':
            printf("Sorry, you failed. ");
            break;

        default:
            printf("Invalid ");
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("You are eligible for next level.\n");
    }
    else
    {
        printf("Please try again next time.\n");
    }

    return 0;
}