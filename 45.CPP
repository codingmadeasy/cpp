//read from one file and write to other
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	ifstream fin("one.txt");
	ofstream fout("two.txt");
	char ch;
	clrscr();
	if(fin==NULL||fout==NULL)
	{
		cout<<"File can't be open";
		exit(1);
	}
	fin>>ch;//reading from one.txt
	fout<<ch;//writing to two.txt
	fin.close();
}