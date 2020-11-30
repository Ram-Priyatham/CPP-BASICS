#include<bits/stdc++.h>
using namespace std;

void neg(int &i)
{
	i=-i;
}
void nege(int *i)
{
	*i=*i+7;
}
int main()
{
	int x=10;
	neg(x);
	cout<<"Negative value without pointer is "<<x<<endl;
	
	nege(&x);
	cout<<"Value using pointer is "<<x<<endl;
}
