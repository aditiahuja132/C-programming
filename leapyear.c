#include<stdio.h>
int main()
{
    int a;
    printf("Year given:");
    scanf("%d",&a);
    if(a%400==0)
    {
        printf("The given year is a leap year");
    }
    else if(a%400!=0)
    {
        printf("The given year is not a leap year");
    }
    return 0;
}