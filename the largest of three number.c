#include <stdio.h>

int main() {
    
    // Declare three variables to store the numbers
    int num1, num2, num3;

    // Accept three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // First, compare num1 and num2
    if (num1 > num2) {
        // If num1 is greater than num2, compare num1 with num3
        if (num1 > num3) {
            printf("The largest number is: %d\n", num1);
        } else {
            printf("The largest number is: %d\n", num3);
        }
    } else {
        // If num2 is greater than or equal to num1, compare num2 with num3
        if (num2 > num3) {
            printf("The largest number is: %d\n", num2);
        } else {
            printf("The largest number is: %d\n", num3);
        }
    }

    return 0;
}
