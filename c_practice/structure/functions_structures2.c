#include <stdio.h>

struct sum {
    int x, y;
};

// Function to return a structure with the sum
struct sum sum_two(struct sum s1, struct sum s2) {
    struct sum result;
    result.x = s1.x + s2.x;
    result.y = s1.y + s2.y;
    return result;
}

int main() {
    struct sum s1, s2, total;

    printf("Enter first pair of numbers (x y): ");
    scanf("%d%d", &s1.x, &s1.y);

    printf("Enter second pair of numbers (x y): ");
    scanf("%d%d", &s2.x, &s2.y);

    total = sum_two(s1, s2);

    printf("Sum result: (%d, %d)\n", total.x, total.y);

    return 0;
}



