//Overloading ++ Operator Postfix and Prefix
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
	abc operator++(int)
	{
		abc t;
		t.a=a++;
		t.b=b++;
		return t;
	}
	abc operator++()
	{
		abc t;
		t.a=++a;
		t.b=++b;
		return t;
	}

};
void main()
{
	abc ob1,ob2,ob3;
	clrscr();
	ob1.input(10,20);
	ob2=++ob1;
	ob3=ob2++;
	ob1.output();
	ob2.output();
	ob3.output();
	getch();
}