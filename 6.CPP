/*Making one class as friend of another class*/
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
	void put()
	{
		cout<<"a= "<<a<<"b= "<<b<<endl;
	}
	void show(B &k);
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
	friend class A;
};
void A::show(B &k)
{
	cout<<"c= "<<k.c<<" d= "<<k.d;
}
void main()
{
	clrscr();
	B ob1;
	A ob2;
	ob2.get();
	ob1.input();
	ob2.put();
	ob2.show(ob1);
	getch();
}