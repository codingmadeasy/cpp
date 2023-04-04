//Ambiguity in Multiple Inheritance
// Same name functions in multiple base classes
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void input(int x)
	{
		a=x;
	}
	void output()
	{
		cout<<"a = "<<a<<endl;
	}
};
class B
{
	int b;
	public:
	void input(int x)
	{
		b=x;
	}
	void output()
	{
		cout<<"b = "<<b<<endl;
	}
};
class C:public A,public B
{
	int c;
	public:
	void inputC(int x)
	{
		c=x;
	}
	void outputC()
	{
		cout<<"c = "<<c<<endl;
	}
};

void main()
{
	C ob;
	clrscr();
	ob.A::input(10);
	ob.A::output();
	ob.B::input(20);
	ob.B::output();
	ob.inputC(30);
	ob.outputC();
	getch();
}