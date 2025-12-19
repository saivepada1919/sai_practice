#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("enter the string : ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    int sign = 1;
    int result = 0;

    // Step 1: Skip leading spaces
    while (str[i] == ' ') {
        i++;
    }

    // Step 2: Check sign
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    else if (str[i] == '+') {
        i++;
    }

    // Step 3: Convert digits only until non-digit appears
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Step 4: Print result
    printf("result : %d\n", result * sign);

    return 0;
}

