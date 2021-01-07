#include<stdio.h>
#include<math.h>
int main()
{
    char opr;
    double n1, n2;
     printf("\nEnter operator +, -, *, /");
     scanf("%c", &opr);

     printf("\nEnter the two numbers:",n1,n2);
     scanf("%lf %lf",&n1,&n2);

switch(opr)
{
    case'+':
    printf("Sum of the two is: %.2f", n1 + n2);
    break;

    case'-':
    printf("Difference of the two is:", n1 - n2);
    break;

    case'*':
    printf("Product of the two is:", n1 * n2);
    break;

    case'/':
    printf("Division of the two is:", n1 / n2);
    break;

    default:
    printf("INVALID INPUT");
}
return 0;
}