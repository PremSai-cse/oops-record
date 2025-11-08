#include <iostream>
using namespace std;

class Number {
private:
    int x, y, z;

public:
    // Function to get values
    void getdata() {
        cout << "Enter values for x, y, z: ";
        cin >> x >> y >> z;
    }

    // Overload unary minus (-) operator
    void operator -() {
        x = -x;
        y = -y;
        z = -z;
    }

    // Display function
    void display() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};

int main() {
    Number n;

    n.getdata();

    cout << "\nBefore overloading (-) operator:\n";
    n.display();

    // Apply overloaded operator
    -n;

    cout << "\nAfter overloading (-) operator:\n";
    n.display();

    return 0;
}
