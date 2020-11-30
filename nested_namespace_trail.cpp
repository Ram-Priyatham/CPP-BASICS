//Nested namespace
#include<iostream>

using namespace std;
namespace KRP
{
	int a=10;
	void display()
	{
		cout<<"Namespace of KRP"<<endl;
	}
	void print();
	namespace RAM
	{
		int a=20;
		void display()
		{
			cout<<"Namespace of RAM"<<endl;
		}
	}
}
void KRP::print()
{
	cout<<"Jai Pubg"<<endl;
}
/*namespace Priyatham
{
	class Pubg
	{
		public:
			const x=10;
		
	}r;
}*/
int main()
{
	//cout<<Priyatham::Pubg::x<<endl;
	KRP::print();
	KRP::display();
	KRP::RAM::display();
	cout<<KRP::a<<endl;
	cout<<KRP::RAM::a<<endl;
}
