#include<bits/stdc++.h>
using namespace std;
class A
{
	int age;
	public:
		void get(int)
		{
			age=18;
		}
		void display()
		{
			cout<<"Age is "<<age<<endl;
		}
};

class B : public  A
{
	int age;
	public:
		void get(int)
		{
			int age =10;
		}
		void display()
		{
			cout<<"Age is "<<age<<endl;
		}
};
class C :   public B
{
	int age;
	public:
		void get(int)
		{
			int age =19;
		}
		void display()
		{
			cout<<"Age is "<<age<<endl;
		}
};

int main()
{
	C c;
	c.get(5);
	c.display();
	A a;
	a.display();
}


