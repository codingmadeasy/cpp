//Constructors All
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
	abc(abc &k)
	{
		a=k.a;
		b=k.b;
	}
	void show()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}

};
void main()
{
	abc ob1,ob2(10),ob3(10,20),ob4(ob2);
	int k,l;
	clrscr();
	cout<<"Enter two no.";
	cin>>k>>l;
	abc ob5(k,l);
	ob1.show();
	ob2.show();
	ob3.show();
	ob4.show();
	ob5.show();
	getch();
}