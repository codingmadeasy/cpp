//Basic type to class (user defined) type conversion using Constructor
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	void output()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
	abc(int x)
	{
		a=x;
		b=x;
	}
	abc()
	{

	}


};
void main()
{
	abc ob1;
	clrscr();
	ob1=10;
	ob1.output();
	getch();
}