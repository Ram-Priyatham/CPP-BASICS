//Implementing Stack

#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> stk;
	stk.push(10);
	stk.push(7);
	stk.push(5);
	stk.push(3);
	cout<<"Stack size is "<<stk.size()<<endl;
	while(!stk.empty())
	{
		cout<<stk.top()<<endl;
		stk.pop();
	}
	cout<<"Stack size is "<<stk.size()<<endl;
	
}
