#include <stdio.h>
#include <math.h>

// Function prototypes
void printDateAmerican(int day, int month, int year);
void printDateEuropean(int day, int month, int year);

int main()
{
    int day, month, year;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter day: ");
        scanf("%d", &day);

        printf("Enter month: ");
        scanf("%d", &month);

        printf("Enter year: ");
        scanf("%d", &year);

        printDateAmerican(day, month, year);
        printDateEuropean(day, month, year);
    }

    return 0;
}

void printDateAmerican(int day, int month, int year)
{
    printf("%d/%d/%d\n", month, day, year);
}

void printDateEuropean(int day, int month, int year)
{
    printf("%d/%d/%d\n", day, month, year);
}
