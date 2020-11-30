#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int x,int y) //function returns x value larger 
{
	return x>y;
}

int main()
{
	vector<int> a;
	int present;
	a.push_back(5); //Inserting elements
	a.push_back(10);
	a.push_back(1);
	a.push_back(51);
	a.push_back(51);
	a.push_back(51);
	a.push_back(15);
	a.push_back(2);
	
	cout<< a[1]<<endl;
	
	sort(a.begin(),a.end()); //O(NlogN) complexity	
	cout<<a[0]<<endl;
	
	present = binary_search(a.begin(),a.end(),10); // Searching for element using binary search time comlexity O(nlogn) returns 1 if present else 0
	cout<<present<<endl;
	
	bool present2 = binary_search(a.begin(),a.end(),100);
	cout<<present2<<endl;;
	
	vector<int>::iterator it1 =lower_bound(a.begin(),a.end(),51);//Prints lowest occurance of 51 when multiple 51 are present
	// We can use auto instead of vector<int>::iterator to get simpler but in this compiler not working
	
	vector<int>::iterator it2 =upper_bound(a.begin(),a.end(),51);//Prints highest occurance of 51 when multiple 51 are present
	cout<<*it1<<"  "<<*it2<<endl;
	cout<<it2-it1<<endl;//gives how many same values are present
	
	cout<<"Elements in ascending order "<<endl;
	vector<int> :: iterator it3;
	for(it3=a.begin();it3!=a.end();it3++)
	{
		cout<<*it3<<"  ";
	}
	cout<<endl;
	cout<<"Elements in descending order "<<endl;
	sort(a.begin(),a.end(),compare); //Compare calls functions and returns value in descending order 
	for(it3=a.begin();it3!=a.end();it3++)
	{
		cout<<*it3<<"  ";
	}
	cout<<endl;
/*	for(int x: a)
	{
		x++; //Incrementing each element by 1
		cout<<x<<"  ";
	}*/// In this compiler its not working but works in other compiler it prints all the elements in vector
	
	for(int i=0;i<a.size();i++)//Another way of printing
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
	vector<int>::iterator it4 = lower_bound(a.begin(),a.end(),51);
	cout<<it4-a.begin();//Displays the position
}
