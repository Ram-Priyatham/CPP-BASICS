#include<iostream>
using namespace std;
int data=10;
int main()
{
	int data=5;
	cout<<"Global variable value"<<::data<<endl;
	::data=7;
	cout<<"Local variable "<<data<<endl;
	cout<<"Global variable new value "<<::data<<endl;
	
}


