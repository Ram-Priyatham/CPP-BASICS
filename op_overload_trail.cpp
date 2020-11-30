#include<bits/stdc++.h>
using namespace std;
class opover
{
	int x,y;
	public:
		opover()
		{
		}
		opover(int a, int b)
		{
			x=a;
			y=b;
		}
		opover operator + (const opover &rhs)  /*Return type is class so opover operator
											   rhs means righ hand side object comes here*/	
		{
			opover o;//Creating object
			o.x=x+rhs.x; //1+3
			o.y=y+rhs.y; //2+4
			return o; //Returing o object to o3
		}
		void print()
		{
			cout<<"x value is "<<x<<endl;
			cout<<"y value is "<<y<<endl;

		}
};

int main()
{
	opover o1(1,2), o2(3,4);
	opover o3 = o1+o2; //o2 goes to rhs part
	//Means ---opover o3 = o1.operator :: +(p2);
	o3.print();
}
