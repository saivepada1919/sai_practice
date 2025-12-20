#include <stdio.h>

int main(void)
{
    unsigned int n;

    printf("enter the n value : ");
    scanf("%u", &n);

    n = ~n;

    printf("after flip the bits : %u\n", n);

    return 0;
}

