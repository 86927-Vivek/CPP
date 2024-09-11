#include <stdio.h>


struct Date {
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate) {
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter day: ");
    scanf("%d", &ptrDate->day);
    printf("Enter month: ");
    scanf("%d", &ptrDate->month);
    printf("Enter year: ");
    scanf("%d", &ptrDate->year);
}

// Function to print the date to the console
void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

int main() {
    struct Date date;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Initialize Date\n");
        printf("2. Enter Date\n");
        printf("3. Display Date\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                initDate(&date);
                printf("Date initialized to default (01/01/2000).\n");
                break;
            case 2:
                acceptDateFromConsole(&date);
                break;
            case 3:
                printDateOnConsole(&date);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}
