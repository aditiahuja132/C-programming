#include<stdio.h>
int main()
{
    int a=30,b=31,c=28,month, days;
     printf("\nEnter the month");
     scanf(" %d", &month);

switch(month)
{
    case 1 :
    printf("Number of days in this month is %d",b);
    break;

    case 2 :
    printf("Number of days in this month is %d",c);
    break;

     case 3 :
    printf("Number of days in this month is %d",b);
    break;

     case 4 :
    printf("Number of days in this month is %d",a);
    break;

     case 5 :
    printf("Number of days in this month is %d",b);
    break;

     case 6 :
    printf("Number of days in this month is %d",a);
    break;

     case 7 :
    printf("Number of days in this month is %d",b);
    break;

     case 8 :
    printf("Number of days in this month is %d",b);
    break;

     case 9 :
    printf("Number of days in this month is %d",a);
    break;

     case 10 :
    printf("Number of days in this month is %d",b);
    break;

     case 11 :
    printf("Number of days in this month is %d",a);
    break;

     case 12 :
    printf("Number of days in this month is %d",b);
    break;

    default:
    printf("INVALID INPUT");
}
return 0;
}