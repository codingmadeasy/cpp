//count alphabet digits...from file
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	ifstream fin("one.txt");
	char ch;
	int a=0,s=0,d=0,o=0;
	clrscr();
	if(fin==NULL)
	{
		cout<<"File can't be open";
		exit(1);
	}
	while(!fin.eof())
	{
		ch=fin.get();
		if((ch>=65&&ch<=90)||ch>=97&&ch<=122)
		{
			a++;
		}
		else if(ch<=48&&ch>=57)
		{
			d++;
		}
		else if(ch==' ')
		{
			s++;
		}
		else
		{
			o++;
		}

	}
	cout<<"No. of Alphabets"<<a<<endl;
	cout<<"No. of Digits"<<d<<endl;
	cout<<"No. of Spaces"<<s<<endl;
	cout<<"No. of Special Symbols"<<o<<endl;
	fin.close();
}