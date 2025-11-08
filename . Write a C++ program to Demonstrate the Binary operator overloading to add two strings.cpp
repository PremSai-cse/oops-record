#include <iostream>
#include <cstring>  // for strcpy, strcat
using namespace std;

class MyString {
private:
    char str[100];

public:
    // Constructor to initialize string
    MyString() {
        str[0] = '\0';
    }

    MyString(const char s[]) {
        strcpy(str, s);
    }

    // Function to display the string
    void display() {
        cout << str << endl;
    }

    // Overload + operator to concatenate two strings
    MyString operator + (MyString s) {
        MyString temp;
        strcpy(temp.str, str);      // copy first string
        strcat(temp.str, s.str);    // concatenate second string
        return temp;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString s3;

    cout << "First String: ";
    s1.display();

    cout << "Second String: ";
    s2.display();

    // Add two strings using overloaded + operator
    s3 = s1 + s2;

    cout << "Concatenated String: ";
    s3.display();

    return 0;
}
