//Single Inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void inputA(int x)
	{
		a=x;
	}
	void outputA()
	{
		cout<<"a = "<<a<<endl;
	}
};
class B:public A
{
	int b;
	public:
	void inputB(int x)
	{
		b=x;
	}
	void outputB()
	{
		cout<<"b = "<<b<<endl;
	}
};

void main()
{
	B ob;
	clrscr();
	ob.inputA(10);
	ob.outputA();
	ob.inputB(20);
	ob.outputB();
	getch();
}