//read from file and print on screen
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	ifstream fin("one.txt");
	char ch;
	clrscr();
	if(fin==NULL)
	{
		cout<<"File can't be open";
		exit(1);
	}
	fin>>ch;
	cout<<"Character is "<<ch;
	fin.close();
}