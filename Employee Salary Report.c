#include <stdio.h>

int main()
{
    int salary[15];
    int i;
    int highest, lowest;
    int count = 0;
    float total = 0, average;

    // Accept salaries
    for (i = 0; i < 15; i++)
    {
        printf("Employee %d Salary : ", i + 1);
        scanf("%d", &salary[i]);
    }

    // Display all salaries
    printf("\nSalaries of Employees:\n");

    for (i = 0; i < 15; i++)
    {
        printf("Employee %d : ₹%d\n", i + 1, salary[i]);
    }

    // Initialize highest and lowest
    highest = salary[0];
    lowest = salary[0];

    // Calculate statistics
    for (i = 0; i < 15; i++)
    {
        if (salary[i] > highest)
        {
            highest = salary[i];
        }

        if (salary[i] < lowest)
        {
            lowest = salary[i];
        }

        total = total + salary[i];

        if (salary[i] >= 50000)
        {
            count++;
        }
    }

    // Calculate average
    average = total / 15;

    // Display report
    printf("\n---------- SALARY REPORT ----------\n");

    printf("\nHighest Salary : ₹%d", highest);
    printf("\nLowest Salary  : ₹%d", lowest);
    printf("\nAverage Salary : ₹%.2f", average);
    printf("\nEmployees earning ₹50000 or above : %d", count);

    printf("\n-----------------------------------\n");

    return 0;
}