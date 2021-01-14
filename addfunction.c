#include<stdio.h>
int addition();

int main()
{
    int answer;
    answer = addition();
    printf("Sum is %d \n",answer);
}

int addition()
{
    int num1=12 , num2=12;
    int sum= num1 + num2 ;
    return sum;
}