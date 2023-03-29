//pass by value
#include<iostream.h>
#include<conio.h>

void change(int x)
{
	x=x+10;
}
void main()
{
	int a=100;
	clrscr();
	cout<<"Before change"<<endl<<"a = "<<a<<endl;
	change(a);
	cout<<"After change"<<endl<<"a = "<<a<<endl;
	getch();
}