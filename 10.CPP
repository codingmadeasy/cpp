//inline with classes
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	void input(int x,int y)//inside class treated inline by default
	{
		a=x;
		b=y;
	}
	int add();
};
inline int abc::add()
{
	return a+b;
}
void main()
{
	abc ob;
	clrscr();
	ob.input(10,20);
	cout<<ob.add();
	getch();
}