#include <stdio.h>

void fib(int a[], int n) {
    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i < n; i++) {
        a[i] = a[i-1] + a[i-2]; 
    }

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a[n];
    fib(a, n);

    return 0;
}

