#include <stdio.h>

// Function to calculate HCF using Euclidean algorithm
int calculateHCF(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

// Function to calculate LCM using the formula
int calculateLCM(int a, int b, int hcf) {
    return (a * b) / hcf;
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate HCF
    int hcf = calculateHCF(a, b);
    printf("HCF of %d and %d is: %d\n", a, b, hcf);

    // Calculate LCM
    int lcm = calculateLCM(a, b, hcf);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
