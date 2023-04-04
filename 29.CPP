//Multiple Inheritance
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
class B
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
	ob.inputA(10);
	ob.outputA();
	ob.inputB(20);
	ob.outputB();
	ob.inputC(30);
	ob.outputC();
	getch();
}