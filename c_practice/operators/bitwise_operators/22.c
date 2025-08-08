#include <stdio.h>
#include <math.h>

int amstrong(int n, int temp) {
    int count = 0;
    int sum = 0;
    int copy = n;

    // Step 1: Count the number of digits
    while (copy != 0) {
        count++;
        copy /= 10;
    }

    // Step 2: Calculate sum of each digit raised to 'count'
    while (temp != 0) {
        int k = temp % 10;
        sum += (int)pow(k, count); // cast to int to avoid decimal values
        temp /= 10; // FIXED: earlier you had n /= 10, which was wrong
    }

    return sum;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int original = n;
    int amstrng = amstrong(n, n);

    if (amstrng == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }
    return 0;
}

