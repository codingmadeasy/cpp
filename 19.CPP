//Array of Objects
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	void input()
	{
		cout<<"Enter two no.";
		cin>>a>>b;
	}
	void output()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
};
void main()
{
	abc ob[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		ob[i].input();
	}
	for(i=0;i<3;i++)
	{
		ob[i].output();
	}
	getch();
}