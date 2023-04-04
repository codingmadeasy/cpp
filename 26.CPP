//Basic type to class (user defined) type conversion using operator overloading
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
	void operator=(int x)
	{
		a=x;
		b=x;
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