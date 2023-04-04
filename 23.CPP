//Overloading + Operator
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
	abc operator+(abc k)
	{
		abc t;
		t.a=a+k.a;
		t.b=b+k.b;
		return t;
	}

};
void main()
{
	abc ob1,ob2,ob3;
	clrscr();
	ob1.input(10,20);
	ob2.input(30,40);
	ob3=ob1+ob2;
	ob3.output();
	getch();
}