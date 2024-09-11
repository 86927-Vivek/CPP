#include <iostream>
using namespace std;


struct Date {
    int day;
    int month;
    int year;

    
    void initDate() {
        day = 1;
        month = 1;
        year = 1900;
    }

    
    void acceptDateFromConsole() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    
    void printDateOnConsole() {
        cout << "Date: " << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }

    
    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        } else {
            return false;
        }
    }
};


int main() {
    Date date;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Initialize Date\n";
        cout << "2. Enter Date\n";
        cout << "3. Display Date\n";
        cout << "4. Check if Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                date.initDate();
                cout << "Date initialized to default (01/01/1900).\n";
                break;
            case 2:
                date.acceptDateFromConsole();
                break;
            case 3:
                date.printDateOnConsole();
                break;
            case 4:
                if (date.isLeapYear()) {
                    cout << date.year << " is a leap year.\n";
                } else {
                    cout << date.year << " is not a leap year.\n";
                }
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
