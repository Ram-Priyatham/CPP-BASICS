#include<bits/stdc++.h>
using namespace std;
bool rev(int x, int y)
{
	return x>y;
}
int main()
{
	int a[5]={5,4,3,2,1};
	int	n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	cout<<"Ascending order"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Descending order "<<endl;
	sort(a,a+n,rev);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int present = binary_search(a,a+n,82);
	cout<<present<<endl;
}
