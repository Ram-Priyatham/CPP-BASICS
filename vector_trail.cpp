#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(5);
    a.push_back(7);
    a.push_back(6);
    a.push_back(51);
    a.push_back(45);
    for(int x: a)
    {
        cout<<x<<"  "<<endl;
        x++;
    }
}