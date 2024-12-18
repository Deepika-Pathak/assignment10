#include <stdio.h>

int main() {
    int marks;

    // Input marks from the user
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Check the grade using if-else if statements
    if (marks >= 90) {
        printf("Grade: A+\n");
    } else if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
