#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Function to get input
    void getdata() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overload + operator to add two complex numbers
    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getdata();

    cout << "Enter second complex number:\n";
    c2.getdata();

    // Add two complex numbers using overloaded + operator
    c3 = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
