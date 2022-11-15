#include <stdio.h>

int f_series(int num)
{
    if (num == 0)
    {
        return 0;
    }

    else if (num == 1)
    {
        return 1;
    }

    else
        return (f_series(num - 1) + f_series(num - 2));

    // f_series(int num) = (f_series(num-1)+f_series(num-2))
}
int main()
{

    int count;
    int c = 0;
    int i;

    printf("Enter number of terms: ");
    scanf("%d", &count);

    printf("The Fibonacci Series:\n");

    for (i = 1; i <= count; i++)
    {
        printf("%d\n", f_series(c));
        c++;
    }

    return 0;
}


// using for loop


// #include <stdio.h>

// int main()
// {

//     int count;
//     int first_term = 0;
//     int second_term = 1;
//     int net_term;
//     int i;

//     printf("Enter the number of terms: ");
//     scanf("%d", &count);

//     for (i = 0; i < count; i++)
//     {
//         if (i <= 1)
//         {
//             net_term = i;
//         }

//         else
//         {
//             net_term = first_term + second_term;
//             first_term = second_term;
//             second_term = net_term;
//         }

//         printf("%d\n", net_term);
//     }

//     return 0;
// }