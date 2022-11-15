#include<stdio.h>

int main ()
{
    float num1;
    float num2;
    float sum;
    float substract;
    float divide;
    float product;


    printf("Enter your first float value: ");
    scanf("%f",&num1);

    printf("Enter your second flaot value: ");
    scanf("%f",&num2);


    sum = num1 + num2;
    substract = num1-num2;
    divide = num1/num2;
    product = num1 * num2;


    printf("\nSum of float value %.2f and %.2f = %.2f",num1,num2,sum);
    printf("\nSubstract of float value %.2f and %.2f = %.2f",num1,num2,substract);
    printf("\nDivision of float value %.2f and %.2f = %.2f",num1,num2,divide);
    printf("\nMultiplication of float value %.2f and %.2f = %.2f",num1,num2,product);







    return 0;
}