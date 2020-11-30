#include<map>
#include<iostream>
using namespace std;
int main()
{
	map<int,int> n;
	n[1]=1;
	n[2]=3;
	n[7]=51;
	cout<<n[5];
	
	map<char,int> cnt;
	string s = "ram priyatham";
	map<char,int>::iterator it;
	char c;
	for(char c:s)
	{
		cnt[c]++;
	}
	
	
	cout<<cnt['a']<<"  "<<cnt['m']<<endl;

	
	
	map<int,char>k;
	k[1]='k';
	k[2]='r';
	k[3]='p';
	k[4]='p';
	
}
