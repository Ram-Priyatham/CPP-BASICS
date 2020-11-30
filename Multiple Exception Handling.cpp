#include<iostream>
using namespace std;
void check(char ch)
{
	try
	{
		if(ch>='0'&&ch<='9')
		{
			throw ch;
		}
		else if(ch>='a'&&ch<='z')
		{
			
			cout<<"entered is a character"<<endl;
		}
		else
		{
			throw ch;
		}
	}
	catch(char)
	{
		cout<<"Entered is not a character"<<endl;
		cout<<"Enter valid character"<<endl;
		cin>>ch;
		check(ch);
	}
}
int main()
{
	char ch;
	cout<<"Enter a character"<<endl;
	cin>>ch;
	check(ch);
}
