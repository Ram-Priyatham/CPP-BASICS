#include<iostream>
using namespace std;
class Pubg
{
	private:
		int a;
	
	public:
		int b;
		void freefire();
		
	protected:
		int c;
		
}k;
class display:public Pubg
{
	public:
		c=40;
		cout<<"Protected value is"<<c<<endl;
}r;
void Pubg::freefire()
{
	cout<<"Free fire is best"<<endl;
}
int main()
{
	k.b=40;
	k.freefire();
	cout<<k.b<<endl;
}
