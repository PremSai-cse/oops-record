#include<iostream>
using namespace std;
class Book
{
    private:
    char ISBNO[50], Book_Name[50], Author[50];
    int pages, ACCNO;
    float price;
    public:
    void getdetails()
    {
        cout << "enter ISBNO";
        cin >> ISBNO;
        cout << "enter book name:";
        cin >> Book_Name;
        cout << "Enter no. of pages:";
        cin >> pages;
        cout << "Enter ACCNO:";
        cin >> ACCNO;
        cout << "Enter price:";
        cin >> price;
    } 
    void display()
    {
        cout << "ISBNO:" << ISBNO << endl;
        cout << "Book_Name" << Book_Name << endl;
        cout << "Pages" << pages << endl;
        cout << "ACCNO:" << ACCNO << endl;
        cout << "Author Name:" << Author << endl;
        cout << "Price:" << price << endl;
    }
};
int main()
{
Book b[50];
int i,n;
cout << "Enter the number of books:";
cin >> n;
for(i=0;i<n;i++)
b[i].getdetails();
}
