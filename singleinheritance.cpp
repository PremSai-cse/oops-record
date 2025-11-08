#include<iostream.h>

#include<conio.h>

class student

{

private:

char name[20];

int rno;

public:

void getstudent()

{

cout<<”enter name of the student=”;

cin>>name;

cout<<”enter roll number of the student=”;

cin>>rno;

}

void displaystudent()

{

cout<<”name of the student=”<<name;

cout<<”\nroll number of the student=”<<rno;

}

}; // class termination

class address : public student

{

private:

char city[20];

public:

void getaddress()

{

getstudent();

cout<<”\nenter city=”;

cin>>city;

}

void displayaddress()

{

displaystudent();

cout<<”\ncity=”<<city;

}

};

void main()

{

address a1;

clrscr();

a1.getaddress();

a1.displayaddress();

getch();

}