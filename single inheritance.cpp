//Single level inheritace
#include<bits/stdc++.h>
using namespace std;

class super
{
	int a,b;
	protected:
		int k,r;
	public:
		void set(int x, int y)
		{
			a=x;
			b=y;
			k=x;
			r=y;
		}	
		void display()
		{
			cout<<"Values of a and b are "<<a<<"  "<<b<<endl;
		}
};
class derived:public super
{
	int c;
	public:
		void setc()
		{
		//	c=a*b;		doesnt work bcoz a,b private
			c=k*r;		//works bcoz k,r protected
		}
		void displayc()
		{
			cout<<"Value of c is "<<c<<endl;
		}		
};

int main()
{
	super s1;
	s1.set(2,3)
	s1.display();
	derived d1();
	d1.setc();
	d1.displayc();
}

