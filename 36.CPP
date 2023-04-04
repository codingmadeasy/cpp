//Hybrid Inheritance
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
class B:virtual public A //public virtual
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
class C:virtual public A
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
class D:public B,public C
{
	int d;
	public:
	void inputD(int x)
	{
		d=x;
	}
	void outputD()
	{
		cout<<"d = "<<d<<endl;
	}
};

void main()
{
	A ob1;//only access members of A class
	B ob2;//can access members of A and B class
	C ob3;//can access members of A and C class
	D ob4;//can access members of A,B,C and D class
	clrscr();
	ob1.inputA(10);
	ob1.outputA();
	ob2.inputA(20);
	ob2.outputA();
	ob2.inputB(30);
	ob2.outputB();
	ob3.inputA(40);
	ob3.outputA();
	ob3.inputC(50);
	ob3.outputC();
	ob4.inputA(60);
	ob4.outputA();
	ob4.inputB(70);
	ob4.outputB();
	ob4.inputC(80);
	ob4.outputC();
	ob4.inputD(90);
	ob4.outputD();
	getch();
}