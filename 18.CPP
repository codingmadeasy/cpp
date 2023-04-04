//Array within class
#include<iostream.h>
#include<conio.h>
class abc
{
	double marks[3];
	int roll;
	double tot;
	public:
	void input()
	{
		int i;
		tot=0;
		cout<<"Enter Roll no.";
		cin>>roll;
		cout<<"Enter Marks of three subjects"<<endl;
		for(i=0;i<3;i++)
		{

			cin>>marks[i];
			tot=tot+marks[i];
		}
	}
	double gettotal()
	{
		return tot;
	}

};
void main()
{
	abc ob;
	clrscr();
	ob.input();
	cout<<"Total Marks = "<<ob.gettotal()<<endl;
	cout<<"Average Marks = "<<ob.gettotal()/3;
	getch();
}