/*Define class matrix of integers with all possible operations like constructor, destructor,
copy constructor and assignment operators*/
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class matrix
{
	int rows,col;
	public:
		matrix()//Constructor
		{
		}
		matrix(int r,int c) //Parameterised Constructor
		{
			rows=r;
			col=c;
		}
		matrix(const matrix &cpy)//Copy constructor
		{
			rows=cpy.rows;
			col=cpy.col;	
		}
		matrix operator =(const matrix &rhs)//Assignment Operator
		{
			rows=rhs.rows;
			col=rhs.col;
			return *this;
		}
		~matrix()//Destructor
		{
		}
		void print()
		{
			cout<<"Number of rows are "<<rows<<endl;
			cout<<"Number of columns are"<<col<<endl;
		}
};
int main()
{
	matrix m1(2,2);
	matrix m2;
	cout<<"Assignment operator values "<<endl;
	m2=m1;
	m2.print();
	cout<<"Copy constructor values are "<<endl;
	matrix m3(m1);
	m3.print();
}
