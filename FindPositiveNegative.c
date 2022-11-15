// To check an integer number positive or negative
#include<stdio.h>

int main()
{

    int num;

    printf("Enter any number to check positive or negative: ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("The number %d is \"positive\"",num);
    }
    
    else if (num<0)
    {
        printf("The number %d is \"negative\"",num);

    }
    
    else
        printf("Enterd value is 0");

    return 0;

}