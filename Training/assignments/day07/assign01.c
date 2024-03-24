#include <stdio.h>

// Function to check if a number consists of prime digits only
int isPrimeDigitNumber(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 2 && digit != 3 && digit != 5 && digit != 7)
            return 0; // Not a prime digit
        number /= 10;
    }
    return 1; // All digits are prime
}

// Function to find the n-th number consisting of prime digits
int findNthPrimeDigitNumber(int n) {
    int count = 0;
    for (int i = 2; ; ++i) { // Starting from 2, the smallest prime digit
        if (isPrimeDigitNumber(i)) {
            ++count;
            if (count == n)
                return i; // Found the n-th prime digit number
        }
    }
}

int main() {
    int t, n;

    // Reading the number of test cases
    scanf("%d", &t);

    while (t--) {
        // Reading the value of n
        scanf("%d", &n);

        // Finding and printing the n-th number made of prime digits
        printf("%d\n", findNthPrimeDigitNumber(n));
    }

    return 0;
}
