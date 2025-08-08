#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0; // 0 or 1 prime kaadu

    int isprime = 1; // assume prime
    for (int i = 2; i <= n / 2 && isprime; i++){
    	    if (n % i == 0) {
            isprime = 0; 
        }
    }
    return isprime;
}

int main() {
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is Not a Prime Number.\n", n);

    return 0;
}

