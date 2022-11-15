#include<stdio.h>

int main ()
{
    int num1;
    int num2;
    int sum;
    int substract, divide, multiply;

    printf("Enter your first number: ");
    scanf("%d",&num1);

    printf("Enter your second number: ");
    scanf("%d",&num2);

    sum = num1 + num2 ;
    substract = num1-num2;
    divide = num1/num2;
    multiply = num1*num2;

    printf("\nSum of %d and %d is %d",num1,num2,sum);
    printf("\nSubstraction of %d and %d is %d",num1,num2,substract);
    printf("\nDivision of %d and %d is %d",num1,num2,divide);
    printf("\nMultiplication of %d and %d is %d",num1,num2,multiply);


    getch();
    return 0;

}