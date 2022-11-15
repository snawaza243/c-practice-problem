#include<stdio.h>

int main()
{
    int number, fact;

    printf("Enter a number for factorial: ");
    scanf("%d",&number);

    fact = findfact(number);

    printf("Factorial of %d is %d.",number,fact);
    return 0;
}

int findfact(int n)
{
    if (n == 0)
    {
        return(1);
    }

    return( n *findfact(n-1));
}
