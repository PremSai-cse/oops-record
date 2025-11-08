#include <iostream>
using namespace std;

class student {
private:
    int rollno, m1, m2, m3, total;
    char name[50];
    float avg;

public:
    void getdetails() {
        cout << "\nEnter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter 3 subject marks: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        avg = total / 3.0; // ensure float division
    }

    void display() {
        cout << "\n-------------------------------";
        cout << "\nRoll No     : " << rollno;
        cout << "\nName        : " << name;
        cout << "\nMark 1      : " << m1;
        cout << "\nMark 2      : " << m2;
        cout << "\nMark 3      : " << m3;
        cout << "\nTotal       : " << total;
        cout << "\nAverage     : " << avg;
        cout << "\n-------------------------------\n";
    }
};

int main() {
    int i, n;
    student S[100];

    cout << "Enter number of students: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "\n--- Enter details for Student " << i + 1 << " ---";
        S[i].getdetails();
        S[i].calculate();
    }

    cout << "\n===== Student Details =====\n";
    for (i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":";
        S[i].display();
    }

    return 0;
}
