#include<stdio.h>
int main()
{
    float cm, inch;
    printf("The number you want to convert to inches is:");
    scanf("%f",&cm);
    inch = cm * 0.394;
    printf("The no  in inches is %f",inch);
    return 0;
    }