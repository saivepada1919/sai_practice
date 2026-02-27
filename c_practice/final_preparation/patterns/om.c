#include <stdio.h>

int main()
{
    int i, j;

    /* Top curve */
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 10 - i; j++)
            printf(" ");
        for(j = 1; j <= i * 2; j++)
            printf("*");
        printf("\n");
    }

    /* Middle body */
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 6; j++)
            printf(" ");
        printf("*       *\n");
    }

    /* Bottom curve */
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 6 + i; j++)
            printf(" ");
        for(j = 1; j <= 8 - i * 2; j++)
            printf("*");
        printf("\n");
    }

    /* Dot (bindu) */
    printf("\n");
    for(j = 1; j <= 14; j++)
        printf(" ");
    printf("*\n");

    return 0;
}
