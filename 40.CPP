//runtime polymorphism using pure virtual function or abstract class
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	virtual void fxn()=0;
};
class B:public A
{
	public:
	void fxn()
	{
		cout<<"Class B"<<endl;
	}
};
class C:public A
{
	public:
	void fxn()
	{
		cout<<"Class C"<<endl;
	}
};

void main()
{
       //A ob1;//cannot create object of abstract class
	A *ptr;//pointer can be created
	B ob1;
	C ob2;
	clrscr();
	ptr=&ob1;
	ptr->fxn();//it will now call its class B fxn
	ptr=&ob2;
	ptr->fxn();//it will now call its class C fxn
	getch();
}