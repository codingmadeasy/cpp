//Pointer to Object
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void inputA(int x)
	{
		a=x;
	}
	void outputA()
	{
		cout<<"a = "<<a<<endl;
	}
};
void main()
{
	A ob;
	A *ptr;
	clrscr();
	ptr=&ob;
	ptr->inputA(10);
	ptr->outputA();
	getch();
}