#include<set>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s;
	s.insert(10);
	s.insert(-1);
	s.insert(5);
	s.insert(6);
	s.insert(8);
	s.insert(11);
	
	// Use of sets they are automatically stored in ascending order during storage
	/*for(int x:s)
	{
		cout<<x<<"  ";
	}*/
	set<int>::iterator it1;
	for(it1=s.begin();it1!=s.end();it1++)
	{
		cout<<*it1<<"  ";
	}
	cout<<endl;
	s.erase(10); //To delete a element
	s.erase(5);
	
	//set<int>::iterator it1;
	for(it1=s.begin();it1!=s.end();it1++)
	{
		cout<<*it1<<"  ";
	}
	cout<<endl;
	set<int>::iterator it2= lower_bound(s.begin(),s.end(),8);
	cout<<*it2<<endl;
/*	for(it1=it2;it1!=s.end();it1++)
	{
		cout<<*it2<<"  ";
	}*/
	
	cout<<endl;
	s.insert(14);
	s.insert(9);
	s.insert(3);
	s.insert(2);
	set<int>::iterator z;
	for(it1=z;it1!=s.end();it1++)
	{
		cout<<*it1<<"  ";
	}
}
