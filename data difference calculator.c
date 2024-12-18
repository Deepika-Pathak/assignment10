#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

// Function to calculate the number of days in a month
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            // Leap year check for February
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return 0;
    }
}

// Function to find the difference between two dates
void findDifference(struct Date start, struct Date end) {
    int years = end.year - start.year;
    int months = end.month - start.month;
    int days = end.day - start.day;

    // Adjust the months and years if the end date is earlier in the month or year
    if (days < 0) {
        months--;
        days += daysInMonth(end.month - 1, end.year);  // Add days from the previous month
    }

    if (months < 0) {
        years--;
        months += 12;
    }

    printf("Difference: %d years, %d months, and %d days\n", years, months, days);
}

int main() {
    struct Date start, end;

    // Input the first date (earlier date)
    printf("Enter start date (dd mm yyyy): ");
    scanf("%d %d %d", &start.day, &start.month, &start.year);

    // Input the second date (later date)
    printf("Enter end date (dd mm yyyy): ");
    scanf("%d %d %d", &end.day, &end.month, &end.year);

    // Calculate and display the difference
    findDifference(start, end);

    return 0;
}
