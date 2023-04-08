//
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class abc
{
	int a,b;
	public:
	void set(int x,int y)
	{
		a=x;
		b=y;
	}
	void put()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
};
void main()
{
	abc ob1,ob2;
	ofstream fout("one.txt");

	clrscr();
	ob1.set(10,20);
	fout.write((char*)&ob1,sizeof(ob1));
	fout.close();
	ifstream fin("one.txt");
	fin.read((char*)&ob2,sizeof(ob2));
	ob2.put();
	fin.close();
	getch();
}