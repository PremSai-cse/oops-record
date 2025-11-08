#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rno;

public:
    void getStudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displayStudent() const {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class Test : public Student {
protected:
    int math, eng, sci;

public:
    void getTest() {
        getStudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter English marks: ";
        cin >> eng;
        cout << "Enter Science marks: ";
        cin >> sci;
    }

    void displayTest() const {
        displayStudent();
        cout << "\nMath marks: " << math;
        cout << "\nEnglish marks: " << eng;
        cout << "\nScience marks: " << sci;
    }
};

class Result : public Test {
private:
    int total;
    float avg;

public:
    void getResult() {
        getTest();
        total = math + eng + sci;
        avg = total / 3.0;  // use float division
    }

    void displayResult() const {
        displayTest();
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << avg;
    }
};

int main() {
    Result r1;
    r1.getResult();
    cout << "\n\n===== STUDENT RESULT =====\n";
    r1.displayResult();
    cout << endl;
    return 0;
}
