#include <stdio.h>

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Hexadecimal: %X\n", num);  // %X for uppercase, %x for lowercase
    return 0;
}

