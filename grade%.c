#include<stdio.h>
int main()
{
    double math, eng, hin, sci, evs, per;
    printf("Enter the marks of all five subjects out of 100:");
    scanf("%lf %lf %lf %lf %lf", &math, &eng, &hin, &sci, &evs);
    per = ((math+eng+hin+sci+evs)/500)*100;
    printf("Your percentage is:%.2lf",per);

    if (per >= 90)
    {
        printf("\nYour grade is A");
    }

    else if (per >= 80 && per < 90)
    {
        printf("\nYour grade is B");
    }
    
    else if (per >= 70 && per < 80)
    {
        printf("\nYour grade is c");
    }

     else if (per >= 60 && per < 70)
    {
        printf("\nYour grade is D");
    }

     else if (per >= 50 && per < 60)
    {
        printf("\nYour grade is E");
    }

     else if (per < 50)
     {
        printf("\nYour Fail, work harder!");
    }
    
    return 0 ;
}