#include<stdio.h>

int main()
{

    // char char1;

    // printf("Enter a character: ");
    // scanf("%c",&char1);

    // printf("ASCII value of character %c is %d ",char1,char1);

    // return 0;

    char a;

    int i;
    for ( i = 0; i < 256; i++)
    {
        printf("\nASCII value of %c is %d.",i,i);
    }
    
    return 0;
}