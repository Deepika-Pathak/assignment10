#include <stdio.h>

int russianPeasantMultiplication(int a, int b) {
    int result = 0;

    while (a > 0) {
        // If 'a' is odd, add 'b' to the result
        if (a % 2 != 0) {
            result += b;
        }

        // Halve 'a' and double 'b'
        a = a / 2;
        b = b * 2;
    }

    return result;
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Call the function and display the result
    int product = russianPeasantMultiplication(a, b);
    printf("Product of %d and %d is: %d\n", a, b, product);

    return 0;
}
