#include <iostream.h>
#include <conio.h>
#include <stdio.h>

class student
{
private:
    char name[20];
    int rno;

public:
    void getstudent()
    {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displaystudent()
    {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class bsc : public student
{
private:
    int phy, chem, math;

public:
    void getbsc()
    {
        getstudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Physics marks: ";
        cin >> phy;
        cout << "Enter Chemistry marks: ";
        cin >> chem;
    }

    void displaybsc()
    {
        displaystudent();
        cout << "\nMath marks: " << math;
        cout << "\nPhysics marks: " << phy;
        cout << "\nChemistry marks: " << chem;
    }
};

class ba : public student
{
private:
    int hindi, punjabi;

public:
    void getba()
    {
        getstudent();
        cout << "Enter Hindi marks: ";
        cin >> hindi;
        cout << "Enter Punjabi marks: ";
        cin >> punjabi;
    }

    void displayba()
    {
        displaystudent();
        cout << "\nHindi marks: " << hindi;
        cout << "\nPunjabi marks: " << punjabi;
    }
};

void main()
{
    clrscr();   // clear screen at start

    bsc b1;
    ba b2;
    int choice;

    cout << "1. BSc  2. BA\nEnter your stream: ";
    cin >> choice;

    clrscr();  // clear again after taking choice

    if (choice == 1)
    {
        b1.getbsc();
        clrscr();
        cout << "----- BSc Student Details -----\n";
        b1.displaybsc();
    }
    else if (choice == 2)
    {
        b2.getba();
        clrscr();
        cout << "----- BA Student Details -----\n";
        b2.displayba();
    }
    else
    {
        cout << "Invalid choice!";
    }

    getch();
}
