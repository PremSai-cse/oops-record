#include <iostream>
#include <iomanip>  // for formatting output
using namespace std;

class Employee {
private:
    int emp_id;
    char name[50];
    float basic_salary, hra, da, pf, gross_salary, net_salary;

public:
    void getDetails() {
        cout << "\nEnter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void calculatePayroll() {
        hra = 0.10 * basic_salary;  // 10% of basic
        da  = 0.15 * basic_salary;  // 15% of basic
        pf  = 0.08 * basic_salary;  // 8% deduction for PF
        gross_salary = basic_salary + hra + da;
        net_salary = gross_salary - pf;
    }

    void displayPayroll() {
        cout << "\n-----------------------------------------";
        cout << "\n           EMPLOYEE PAY SLIP";
        cout << "\n-----------------------------------------";
        cout << "\nEmployee ID     : " << emp_id;
        cout << "\nEmployee Name   : " << name;
        cout << fixed << setprecision(2);
        cout << "\nBasic Salary    : Rs. " << basic_salary;
        cout << "\nHRA (10%)       : Rs. " << hra;
        cout << "\nDA  (15%)       : Rs. " << da;
        cout << "\nPF  (8%)        : Rs. " << pf;
        cout << "\n-----------------------------------------";
        cout << "\nGross Salary    : Rs. " << gross_salary;
        cout << "\nNet Salary      : Rs. " << net_salary;
        cout << "\n-----------------------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        emp[i].getDetails();
        emp[i].calculatePayroll();
    }

    cout << "\n=========== PAYROLL DETAILS ===========\n";
    for (int i = 0; i < n; i++) {
        emp[i].displayPayroll();
    }

    return 0;
}
