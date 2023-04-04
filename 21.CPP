//Constructor and Destructor
#include<iostream.h>
#include<conio.h>
class abc
{
	static int c;
	public:
	abc()
	{
		c++;
		cout<<"Constructor "<<c<<endl;
	}
	~abc()
	{
		cout<<"Destructor "<<c<<endl;
		c--;
	}

};
int abc::c;
void main()
{
	abc ob1,ob2,ob3;
}