#include<bits/stdc++.h>
using namespace std;
template <typename T>//Not only T as template name we can use anthing as template name
T sum(T a,T b)
{
	return a+b;
}

int main()
{
	int a=10,b=20;
	int s=sum<int>(a,b);//Integer Template calling
	cout<<"Integer addition is "<<s<<endl;
	double d=12.6,f=13.7;
	double ds=sum<double>(d,f);//Doube Template calling
	cout<<"Double additon is "<<ds<<endl;
}
