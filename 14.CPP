//static data member
#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	static int c;//declaring static member
	void show()
	{
		cout<<"c = "<<c<<endl;
	}
};
int abc::c=100; //initializing or defining static member
void main()
{
	abc ob1;
	clrscr();
	cout<<"c = "<<ob1.c<<endl;//c is common to all objects
	cout<<"c = "<<abc::c<<endl;//accessing using scope res opr
	getch();
}