#include <stdio.h>

int main()
{
    int n;
    printf("enter the value:");
    scanf("%x",&n);
    printf("%0X\n",n);
    n=((n & 0XF00F)|((n & 0X0F00)>>4)|((n & 0X00F0)<<4));
    printf("%0X\n",n);

    return 0;
}
