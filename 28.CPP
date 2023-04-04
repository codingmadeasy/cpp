//Class (user defined) type to Class type conversion using operator overloading
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
	int getA()
	{
		return a;
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
	void operator=(A k)
	{
		b=k.getA();
	}
};

void main()
{
	A ob1;
	B ob2;
	clrscr();
	ob1.inputA(10);
	ob2=ob1;
	ob2.outputB();
	getch();
}