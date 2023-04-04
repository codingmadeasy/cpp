//Pointer to Derive Class Object
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void fxn()
	{
		cout<<"Class A"<<endl;
	}
};
class B:public A
{
	public:
	void fxn()
	{
		cout<<"Class B"<<endl;
	}
};

void main()
{
	A ob1;
	B ob2;
	A *ptr;
	clrscr();
	ptr=&ob1;
	ptr->fxn();
	ptr=&ob2;
	ptr->fxn();//it will also call base class fxn bcoz of compile time binding
	getch();
}