/*Common friend of two classes*/
#include<iostream.h>
#include<conio.h>
class B;
class A
{
	int a,b;
	public:
	void get()
	{
		cout<<"Enter a & b";
		cin>>a>>b;
	}
	friend void show(A,B);
};
class B
{
	int c,d;
	public:
	void input()
	{
		cout<<"Enter c & d";
		cin>>c>>d;
	}
	friend void show(A,B);
};
void show(A k,B l)
{
	cout<<"a = "<<k.a<<endl<<"b = "<<k.b<<endl;
	cout<<"c = "<<l.c<<endl<<"d = "<<l.d<<endl;
}
void main()
{
	clrscr();
	A ob1;
	B ob2;
	ob1.get();
	ob2.input();
	show(ob1,ob2);
	getch();
}