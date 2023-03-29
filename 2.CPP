//Defining member functions inside or outside class
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	void set(int,int);//only function declaration in class
	void put()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
};
void abc::set(int x,int y)//defining member  function outside class
{                         //with help of identity label
	a=x;
	b=y;
}
void main()
{
	abc ob;
	clrscr();
	ob.set(10,20);
	ob.put();
	getch();
}