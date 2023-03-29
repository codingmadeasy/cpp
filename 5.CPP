//Nesting of Member functions  or how to access private member functions
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	void get()//private
	{
		cout<<"Enter a & b";
		cin>>a>>b;
	}
	void put() //private
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
	public:
	void run()//it is public so can be called from outside class
	{
		get();//can access private members of class
		put();
	}
};
void main()
{
	abc ob1,ob2;
	clrscr();
	ob1.run();
	ob2.run();
	getch();
}