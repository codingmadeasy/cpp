//
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
struct abc
{
	int a;
	char b;
};
void main()
{
	abc s1,s2;
	ofstream fout("one.txt");

	clrscr();
	s1.a=10;
	s1.b='A';
	fout.write((char*)&s1,sizeof(s1));
	fout.close();
	ifstream fin("one.txt");
	fin.read((char*)&s2,sizeof(s2));
	cout<<s2.a<<endl<<s2.b;
	fin.close();
	getch();
}