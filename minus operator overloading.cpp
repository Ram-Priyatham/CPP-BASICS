//Operator overloading - operator
#include<bits/stdc++.h>
using namespace std;

class Opoverload
 {
 	int x,y;
 	public:
		Opoverload(int a, int b) 
		{		
			x=a;
			y=b;
		}
		Opoverload operator -(Opoverload o2)
		{
			x= x-o2.x;
			y=y-o2.y;
		
			cout<<"x value is "<<x<<endl;
			cout<<"y value is "<<y<<endl;
		}
};

int main()
{
	Opoverload o1(3,4);
	Opoverload o2(1,2);
	o1-o2;	
}
