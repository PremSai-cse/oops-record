#include <iostream>
using namespace std;

class student {
private:
    int rollno;
    string name;

public:
    // Default constructor
    student() {
        rollno = 1;
        name = "Prem";
    }

    // Parameterized constructor
    student(int r1, string n) {
        rollno = r1;
        name = n;
    }

    // Copy constructor
    student(const student &s) {
        rollno = s.rollno;
        name = s.name;
    }

    // Destructor
    ~student() {
        cout << "Destructor called for: " << name << endl;
    }

    // Display function
    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    student s1;               // Calls default constructor
    student s2(101, "Prem");  // Calls parameterized constructor
    student s3 = s2;          // Calls copy constructor

    cout << "\n--- Student 1 ---\n";
    s1.display();

    cout << "\n--- Student 2 ---\n";
    s2.display();

    cout << "\n--- Student 3 (Copy of Student 2) ---\n";
    s3.display();

    cout << "\nEnd of program — destructors will be called automatically.\n";
    return 0;
}
