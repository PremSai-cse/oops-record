#include<iostream>
using namespace std;
class complex1 
{
    float real;
    float imag;
    public:
    void getdata()
    {
        cout<<"Enter the real part:";
        cin>>real;
        cout<<"Enter the imaginary part:";
        cin>>imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"!"<<endl;
    }
    complex1 add(complex1 C2)
    {
        complex1 temp;
        temp.real=real+C2.real;
        temp.imag=imag+C2.imag;
        return temp;
    }
};
int main()
{
    complex1 C1,C2,C3;
    cout<<"Enter the first complex number:"<<endl;
    C1.getdata();
    cout<<"Enter the second complex number:"<<endl;
    C2.getdata();
    C3=C1.add(C2);
    cout<<"\n Sum of the two complex numbers :";
    C3.display();
    return 0;
}