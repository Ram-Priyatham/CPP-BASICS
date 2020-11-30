#include<iostream>
using namespace std;
class Pubg
{
	int x,y;
	public:
		Pubg()//Now its ia constructor same name of class as no return type so not mentioning void/int
		{
			x=51;
			y=15;
			cout<<"This is constructor method"<<endl;
		}
		Pubg(int a, int b)//Parameterized constructor
		{
			cout<<"Parameter constructor values"<<endl;
			cout<<" a value is"<<a<<endl;
			cout<<" b value is"<<b<<endl;
		}
		Pubg(int p,int i,int t);
	void display()
	{
		cout<<"value of x "<<x<<endl;
		cout<<"value of y "<<y<<endl;
	}
};
Pubg::Pubg(int p,int i,int t)//Constructor outside of class
{
	cout<<"Constructor values outside class "<<endl;
	cout<<"Value of p is "<<p<<endl;
	cout<<"Value of i is "<<i<<endl;
	cout<<"Value of t is "<<t<<endl;
}
int main()
{
	Pubg k;//Object for default constructor
	Pubg r(10,20);//Object for parameter constructor
	Pubg j(30,40,50);
	k.display();
	return 0;
}
//Constructor is automatically caleed even if we nt called it
