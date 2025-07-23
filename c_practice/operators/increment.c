#include <stdio.h>

int main() {
    int a = 2, b = 3;

    b = a++ + b--;  // b = 2 + 3 = 5, a becomes 3
    a = a-- + ++b;  // a = 3 + 6 = 9, a becomes 9, b = 6
    b = ++a + --b;  // b = 10 + 5 = 15, a = 10, b = 15

    printf("%d, %d\n", a, b);

    return 0;
}

