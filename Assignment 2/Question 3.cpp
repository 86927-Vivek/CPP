#include <iostream>
#include <string>
using namespace std;


namespace NStudent {
    
    class Student {
        int rollNo;
        string name;
        float marks;

    public:
        
        void initStudent() {
            rollNo = 0;
            name = "";
            marks = 0.0;
        }

        
        void acceptStudentFromConsole() {
            cout << "Enter roll number: ";
            cin >> rollNo;
            cin.ignore();  
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter marks: ";
            cin >> marks;
        }

        
        void printStudentOnConsole() {
            cout << "Student Details:\n";
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
    };
}


int main() {
   
    NStudent::Student student;

   
    student.acceptStudentFromConsole();
    student.printStudentOnConsole();

    return 0;
}
