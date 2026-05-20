
#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    float marks;

public:
    void addStudent() {
        cout << "Enter Student ID: ";
        cin >> id;

        cout << "Enter Student Name: ";
        cin>>name ;
        cout << "Enter Student Marks: ";
        cin >> marks;
    }

    void displayStudent() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    int choice;

    do {
        cout << "===== STUDENT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                s1.addStudent();
                break;

            case 2:
                s1.displayStudent();
                break;

            case 3:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}


