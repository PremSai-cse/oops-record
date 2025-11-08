#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Function to get time input
    void getTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }

    // Function to display time
    void displayTime() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }

    // Overload > operator
    bool operator > (Time t) {
        if (hours > t.hours)
            return true;
        else if (hours == t.hours && minutes > t.minutes)
            return true;
        else
            return false;
    }

    // Overload == operator
    bool operator == (Time t) {
        return (hours == t.hours && minutes == t.minutes);
    }
};

int main() {
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "Enter second time:\n";
    t2.getTime();

    cout << "\nFirst Time: ";
    t1.displayTime();

    cout << "Second Time: ";
    t2.displayTime();

    // Compare times
    if (t1 > t2)
        cout << "\nFirst time is greater.\n";
    else if (t2 > t1)
        cout << "\nSecond time is greater.\n";
    else
        cout << "\nBoth times are equal.\n";

    return 0;
}
