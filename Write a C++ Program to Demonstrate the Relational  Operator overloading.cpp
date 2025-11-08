#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float height; // in centimeters

public:
    // Function to get student details
    void getDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter height (in cm): ";
        cin >> height;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }

    // Overload > operator to compare heights
    bool operator > (Student s) {
        return height > s.height;
    }

    // Overload < operator to compare heights
    bool operator < (Student s) {
        return height < s.height;
    }

    // Overload == operator to check if heights are equal
    bool operator == (Student s) {
        return height == s.height;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details of first student:\n";
    s1.getDetails();

    cout << "\nEnter details of second student:\n";
    s2.getDetails();

    cout << "\nFirst Student: ";
    s1.displayDetails();
    cout << "Second Student: ";
    s2.displayDetails();

    // Compare heights using overloaded operators
    if (s1 > s2)
        cout << "\nFirst student is taller.\n";
    else if (s1 < s2)
        cout << "\nSecond student is taller.\n";
    else
        cout << "\nBoth students have the same height.\n";

    return 0;
}
