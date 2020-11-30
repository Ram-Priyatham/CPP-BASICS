/*Short hand operator overloading +=,-= ....*/
#include<bits/stdc++.h>
using namespace std;

class shorthand
{
	int a,b;
	public:
		shorthand(int x, int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"a = "<<a<<" and  b = "<<b<<endl;
		}
		shorthand operator +=(shorthand p)
		{
			a+=p.a;
			b+=p.b;
			return *this; // this parameter is used for member functions it acts as reference to object
		}
		shorthand operator -=(shorthand p)
		{
			a-=p.a;
			b-=p.b;
			return *this;
		}	
};

int main()
{
	shorthand s1(12,32), s2(7,51);
	s1+=s2;
	s1.display();
	s2-=s1;
	s2.display();
	return 0;
}

