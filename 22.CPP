//Constructors and Array of objects
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	abc()
	{
		a=b=0;
	}
	abc(int x)
	{
		a=b=x;
	}
	abc(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}

};
void main()
{
	abc ob[3]={abc(),abc(10),abc(10,20)};
	clrscr();
	ob[0].display();
	ob[1].display();
	ob[2].display();
	getch();
}