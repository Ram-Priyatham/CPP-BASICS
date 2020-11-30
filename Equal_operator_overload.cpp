#include<bits/stdc++.h>
using namespace std;
class AssignmentOverload
{
	int a,b;
	public:
		AssignmentOverload(int v1,int v2)
		{
			a=v1;
			b=v2;
		}
		void operator =(AssignmentOverload a2)
		{
			v1=a2.a;
			v2 = a2.b;
			
		}
		void display()
		{
			cout<<"The values are "<<a2.v1<<"  "<<a2.v2<,endl;
		}
}a1,a2;

int main()
{
	a1(20,30);
	a2(40,50);
	a1.display();
	a2.display();
	a2=a1;
	a2.display();
},

