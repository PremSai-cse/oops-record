#include <iostream>
using namespace std;

class Number {
private:
    int x, y;

public:
    // Function to get values
    void getdata() {
        cout << "Enter values for x and y: ";
        cin >> x >> y;
    }

    // Display function
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }

    // Overload increment operator (++): prefix form
    void operator ++() {
        ++x;
        ++y;
    }

    // Overload decrement operator (--): prefix form
    void operator --() {
        --x;
        --y;
    }
};

int main() {
    Number n;

    n.getdata();

    cout << "\nInitial values:\n";
    n.display();

    ++n; // calls overloaded ++ operator
    cout << "\nAfter using ++ operator:\n";
    n.display();

    --n; // calls overloaded -- operator
    cout << "\nAfter using -- operator:\n";
    n.display();

    return 0;
}
