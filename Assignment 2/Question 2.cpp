#include <iostream>
#include <string>
using namespace std;

// Class to represent a Student
class Student {
    int rollNo;
    string name;
    float marks;

public:
    // Function to initialize student with default values
    void initStudent() {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }

    // Function to accept student details from the user
    void acceptStudentFromConsole() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore();  // To ignore leftover newline character in input buffer
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to print student details to the console
    void printStudentOnConsole() {
        cout << "Student Details:\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Menu-driven program
int main() {
    Student student;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Initialize Student\n";
        cout << "2. Enter Student Details\n";
        cout << "3. Display Student Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student.initStudent();
                cout << "Student initialized to default values (0, \"\", 0.0).\n";
                break;
            case 2:
                student.acceptStudentFromConsole();
                break;
            case 3:
                student.printStudentOnConsole();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
