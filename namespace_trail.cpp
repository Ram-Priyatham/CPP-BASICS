#include<iostream>
using namespace std;//Global scope

namespace krp/*User defined namespaces*/
{
	void display()
	{
		cout<<"Jai Pubg"<<endl;
	}
}
namespace ram
{
	void display(int a)
	{
		cout<<"Jai Free Fire"<<a<<endl;
	}
}
int main()
{
	krp::display();
	ram::display(10);
	return 0;
}
