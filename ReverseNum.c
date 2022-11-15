#include <stdio.h>

int main()
{

    int num;
    int r_num;

    printf("Enter your number: ");
    scanf("%d", &num);

    r_num = r_func(num);

    printf("Reverse number is %d", r_num);

    return 0;
}

int sum = 0;
int rem;
r_func(int number)
{
    if (number)
    {
        rem = number % 10;

        sum = sum * 10 + rem;

        r_func(number / 10);
    }

    else
        return sum;

    return sum;
}