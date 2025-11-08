#include<iostream.h>

#include<conio.h>

#include<stdio.h>

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

};

class address

{

private:

char city[20];

public:

void getaddress()

{

cout<<”\nenter city=”;

cin>>city;

}

void displayaddress()

{

cout<<”\ncity=”<<city;

}

};

class account: public student, public address

{

private:

int tfee,submit,balance;

public:

void getaccount()

{

getstudent();

getaddress();

cout<<“\nenter total fee=“;

cin>>tfee;

cout<<“\nenter submit fee=“ ;

cin>>submit;

}

void displayaccount()

{

displaystudent();

displayaddress();

cout<<”\ntotal fee=”<<tfee;

cout<<”\nsubmit fee=”<<submit;

balance=tfee-submit;

cout<<“\nbalance fee=“<<balance;

}

};

void main()

{

account a1;

a1.getaccount();

clrscr();

a1.displayaccount();

getch();

}