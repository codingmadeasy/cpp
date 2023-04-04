//Overloading == <  Operator
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	void input(int x,int y)
	{
		a=x;
		b=y;
	}
	void output()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
	int operator==(abc k)
	{
		if(a==k.a&&b==k.b)
			return 1;
		else
			return 0;
	}
	int operator<(abc k)
	{
		if(a<k.a&&b<k.b)
			return 1;
		else
			return 0;
	}

};
void main()
{
	abc ob1,ob2,ob3;
	clrscr();
	ob1.input(10,20);
	ob2.input(10,20);
	ob3.input(5,9);
	if(ob1==ob2)
		cout<<"Equal";
	else
		cout<<"Not Equal";
	if(ob2<ob3)
		cout<<"True";
	else
		cout<<"False";
	getch();
}