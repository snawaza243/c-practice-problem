#include <stdio.h>

int main()
{

    int num1;
    int num2;
    int num3;

    printf("Enter your number\n");
    scanf(" %d %d %d", &num1,&num2,&num3);

    printf("You have enterd %d \t%d \t%d ",num1,num2, num3);

    printf("\nYou have enterd %d \t%d \t%d",num3, num2,num1);

}