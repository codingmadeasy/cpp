//Multilevel Inheritance
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
class C:public B
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
	A ob1;//only access members of A class
	B ob2;//can access members of A and B class
	C ob3;//can access members of A,B and C class
	clrscr();
	ob1.inputA(10);
	ob1.outputA();
	ob2.inputA(20);
	ob2.outputA();
	ob2.inputB(30);
	ob2.outputB();
	ob3.inputA(40);
	ob3.outputA();
	ob3.inputB(50);
	ob3.outputB();
	ob3.inputC(60);
	ob3.outputC();
	getch();
}