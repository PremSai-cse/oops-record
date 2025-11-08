#include<iostream>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdetails()
    {
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter 3 subject marks:";
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        total=m1+m2+m3;
        avg=total/3;
    }
    void display()
    {
        cout<<"Roll no:"<<rollno;
        cout<<"Name:"<<name;
        cout<<"Mark1:"<<m1;
        cout<<"Mark2:"<<m2;
        cout<<"Mark3:"<<m3;
        cout<<"Total:"<<total;
        cout<<"Average:"<<avg;
    }
};
int main()
{
    student S;
    S.getdetails();
    S.calculate();
    S.display();
    return 0;
}