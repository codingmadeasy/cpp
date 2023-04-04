//Function Overriding Inheritance
//Derive class having same name function as base class
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void display()
	{
		cout<<"Base Class Function"<<endl;
	}
};
class B:public A
{
	public:
	void display()
	{
		cout<<"Derive Class Function"<<endl;
	}
};

void main()
{
	A ob1;
	B ob2;
	clrscr();
	ob1.display();
	ob2.display();
	getch();
}