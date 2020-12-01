/*Define class vector of integers with all possible operations like constructor, destructor,
copy constructor and assignment operators>, <, >=, <=, ==, ++ (pre and post), +, +=, ( ) */

#include<bits/stdc++.h>
using namespace std;
class vectors
{
	int n,*a;
	public:
		vectors()
		{
		}
		vectors(int n)
		{
			a=new int[n];
			cout<<"Enter array elements"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			cout<<endl;
		}
		void print()
		{
			cout<<"Vector elements are "<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		
};

int main()
{
	vectors v1(5);
	v1.print();
}
