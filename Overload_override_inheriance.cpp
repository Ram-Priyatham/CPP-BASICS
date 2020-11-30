//Overload and override
#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		void print()
		{
			cout<<"Super class called "<<endl;
		}
};

class B :public A
{
	public:
		void print()//Over riding
		{
			cout<<"Derived class called "<<endl;
		}
		void print(int i)
		{
			cout<<"Derived class overload value "<<i<<endl;
		}
};
int main()
{
	A a;
	B b;
	a.print();
	b.print();
	b.print();
	b.print(10);
}
