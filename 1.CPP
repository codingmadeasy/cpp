//Classes and Objects or defining class members or class declaration or public private
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;//private data members which can be accessed only inside class
	public:
	void set(int x,int y)//set and put both are in public section so they
	{                    //can be accessed outside class
		a=x;
		b=y;
	}
	void put()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
};
void main()
{
	abc ob;//defining object
	clrscr();
	ob.set(10,20);//calling member function which is public
	ob.put();
	getch();
}