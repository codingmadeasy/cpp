//static data member
#include<iostream.h>
#include<conio.h>
void change()
{
	static int a=10; //static variable retain value throughout fxn calls
	cout<<"a = "<<a<<endl;
	a++;
}
void main()
{
	clrscr();
	change();
	change();
	change();
	getch();
}