
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	vector<vector<int> > v;
	cout<<"Inserting elements"<<endl;
	for(int i=0;i<5;i++)
	{
		vector<int> v1;
		for(int j=0;j<5;j++)
		{
			v1.push_back(i+j);
		}
		v.push_back(v1);
	}
	for (int i = 0; i < v.size(); i++)
	{ 
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout<<endl;   
    } 
}

