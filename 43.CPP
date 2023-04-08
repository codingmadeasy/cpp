//read from keyboard and write in file
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	ofstream fout("one.txt");
	char ch;
	clrscr();
	if(fout==NULL)
	{
		cout<<"File can't be open";
		exit(1);
	}
	cout<<"Enter a character";
	cin>>ch;
	fout<<ch;
	fout.close();
}