#include<iostream>
using namespace std;

class Pubg
{
	public:
		Pubg()
		{
			cout<<"Normal Constructor"<<endl;
		}
		Pubg(const Pubg&)//Copy Constructor
		{
			cout<<"Copy Constructor"<<endl;
		}
	/*	~Pubg()
		{
			cout<<"Destructor in class"<<endl;
		}*/
		~Pubg(); //We can call only one destructor ither inside class or outside bcoz it doesnot support overloading
};
Pubg::~Pubg()
{
	cout<<"Destructor outside class"<<endl;
}
int main()
{
	Pubg k;
	Pubg r(k);
	//Out we get two destructor values bcoz 2 objects are there
}
