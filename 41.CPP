//runtime polymorphism using pure virtual function or abstract class
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	virtual void fxn()=0;
	void fxnA()//concrete methods can be there in abstract class
	{
		cout<<"Class A fxnA"<<endl;
	}
};
class B:public A
{
	public:
	void fxn()
	{
		cout<<"Class B fxn"<<endl;
	}
	void fxnB()
	{
		cout<<"Class B fxnB"<<endl;
	}
};
void main()
{
	A *ptr;
	B ob1;
	clrscr();
	ptr=&ob1;
	ptr->fxnA();
	ptr->fxn();
	((B*)(ptr))->fxnB();  //type cast required
	getch();
}