//Using friend function to access private members
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	void set(int x,int y)
	{
		a=x;
		b=y;
	}
	void put()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
	abc add(abc,abc); //it is friend of class abc
};
abc add(abc k,abc l) //body of friend function
{
	abc t;
	t.a=k.a+l.a;
	t.b=k.b+l.b;
	return t;
}
void main()
{
	abc ob1,ob2,ob3;
	clrscr();
	ob1.set(10,20);
	ob2.set(100,200);
	add(ob1,ob2);//called as normal function
	ob3.put();
	getch();
}