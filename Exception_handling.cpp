#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter values of a,b"<<endl;
	cin>>a;
	cin>>b;
	try
	{
		if(b!=0)
		{
			cout<<a/b;
		}
		else 
		{
			throw(b);
		}
	}
	catch (int i)
	{
		cout<<"Divison by zero not possible "<<i<<endl;
	}
}
