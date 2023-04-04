//Function overloading with classes
#include<iostream.h>
#include<conio.h>
class abc
{
	public:
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
};
void main()
{
	abc ob;
	clrscr();
	cout<<"x + y = "<<ob.add(10,20)<<endl;
	cout<<"x + y + z = "<<ob.add(10,20,30)<<endl;
	cout<<"w + x + y + z = "<<ob.add(10,20,30,40)<<endl;
	getch();
}