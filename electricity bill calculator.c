#include <stdio.h>

int main() {
    float units, bill;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    // Calculate the bill based on the units consumed
    if (units <= 100) {
        bill = units * 2;
    }
    else if (units <= 200) {
        bill = 100 * 2 + (units - 100) * 3;
    }
    else {
        bill = 100 * 2 + 100 * 3 + (units - 200) * 5;
    }

    // Output the total bill
    printf("The total electricity bill is: Rs %.2f\n", bill);

    return 0;
}
