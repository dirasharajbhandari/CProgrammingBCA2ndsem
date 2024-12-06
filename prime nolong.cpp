#include <stdio.h>

int main() {
    int n, i, j, sum = 0, count;

    // Input: Ask the user for the upper limit
    printf("Enter the upper limit: ");
    scanf("%d", &n);  // No need for array, so n is just an integer

    // Loop through each number from 2 to the given limit
    for (i = 2; i <= n; i++) {
        count = 0;  // Reset count for each number

        // Check divisibility of 'i' by any number from 1 to i
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;  // Increment count if 'i' is divisible by 'j'
            }
        }

        // If 'count' is exactly 2, 'i' is prime (divisible only by 1 and itself)
        if (count == 2) {
            sum += i;  // Add prime number to the sum
        }
    }

    // Output: Display the sum of all prime numbers
    printf("Sum of all prime numbers up to %d is: %d\n", n, sum);

    return 0;
}

