#include <stdio.h>
int main()
{
    int months;
    printf("Enter the month:");
    scanf("%d", &months);

    switch (months)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
        printf("It has 31 days");
        break;

    case 2:
        printf("It has 28 days and 29 days in a leap year");
        break;

    case 4:
    case 6:
    case 10:
    case 12:
        printf("It has 30 days");
        break;
    default:
        printf("An year has only 12 months dear:)");
        break;
    }
    return 0;
}