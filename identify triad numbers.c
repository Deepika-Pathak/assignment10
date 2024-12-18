#include <stdio.h>

int main() {
    // Declare a variable to store the number
    int num;

    // Accept a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Ensure the number is a valid three-digit number
    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;  // Exit the program if not a valid three-digit number
    }

    // Extract the first, middle, and last digits
    int first_digit = num / 100;             // First digit
    int middle_digit = (num % 100) / 10;     // Middle digit
    int last_digit = num % 10;               // Last digit

    // Check if the sum of the first and last digits equals the middle digit
    if (first_digit + last_digit == middle_digit) {
        printf("%d is a triad number.\n", num);
    } else {
        printf("%d is not a triad number.\n", num);
    }

    return 0;
}
