#include <stdio.h>

void calculateNotes(int amount) {
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int numNotes[10] = {0};  

    // Loop through each denomination and calculate how many notes are needed
    for (int i = 0; i < 10; i++) {
        numNotes[i] = amount / notes[i];
        amount = amount % notes[i];       
    }

    // Output the result in the required format
    int first = 1; 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < numNotes[i]; j++) {
            if (first) {
                printf("%d", notes[i]);
                first = 0; // After the first note, print a comma
            } else {
                printf(" + %d", notes[i]);
            }
        }
    }
    printf("\n");
}

int main() {
    int amount;

    // Input the amount to be dispensed
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate and print the notes
    calculateNotes(amount);

    return 0;
}
