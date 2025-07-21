#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Method 1: Using logical AND
    if (num >= 10 && num <= 20) {
        printf("%d is in the range 10 to 20.\n", num);
    } else {
        printf(" %d is outside the range 10 to 20.\n", num);
    }

    return 0;
}

