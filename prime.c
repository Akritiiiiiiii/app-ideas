/*
 * [Program]: Check if a number is Prime
 * [Language]: C
 * [Author]: Akriti Saroj
 * [Hacktoberfest 2025 Contribution]
 */

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Display result
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
