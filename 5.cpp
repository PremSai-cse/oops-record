#include <iostream>
using namespace std;

class EBill {
private:
    int CustomerID, Units;
    char CustomerName[50], Address[50];
    float amount;

public:
    void getcustomerdetails() {
        cout << "Enter Customer ID: ";
        cin >> CustomerID;
        cout << "Enter Customer Name: ";
        cin >> CustomerName;
        cout << "Enter Address: ";
        cin >> Address;
        cout << "Enter number of units: ";
        cin >> Units;
    }

    void calculatebill() {
        if (Units <= 100)
            amount = 0;
        else if (Units <= 200)
            amount = (Units - 100) * 2.25;
        else if (Units <= 400)
            amount = (100 * 2.25) + (Units - 200) * 4.25;
        else if (Units <= 600)
            amount = (100 * 2.25) + (200 * 4.25) + (Units - 400) * 6.25;
        else
            amount = (100 * 2.25) + (200 * 4.25) + (200 * 6.25) + (Units - 600) * 9;
    }

    void print() {
        cout << "\n------ Electricity Bill ------\n";
        cout << "Customer ID   : " << CustomerID << endl;
        cout << "Name          : " << CustomerName << endl;
        cout << "Address       : " << Address << endl;
        cout << "Units Consumed: " << Units << endl;
        cout << "Bill Amount   : Rs. " << amount << endl;
        cout << "-------------------------------\n";
    }
};

int main() {
    EBill B;
    B.getcustomerdetails();
    B.calculatebill();
    B.print();
    return 0;
}
