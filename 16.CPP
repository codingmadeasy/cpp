//Function Overloading without Classes
#include<iostream.h>
#include<conio.h>
int add(int x,int y)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
int add(int w,int x,int y,int z)
{
	return w+x+y+z;
}
void main()
{

	clrscr();
	cout<<"x + y = "<<add(10,20)<<endl;
	cout<<"x + y + z = "<<add(10,20,30)<<endl;
	cout<<"w + x + y + z = "<<add(10,20,30,40)<<endl;
	getch();
}