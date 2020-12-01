/*Define class matrix of integers with all possible operations like constructor, destructor,
copy constructor and assignment operators*/

#include<bits/stdc++.h>
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
		matrix(const matrix &)
		{
			
		}
		matrix operator =(const matrix &rhs)
		{
			rows=rhs.rows;
			col=rhs.col;
			cout<<rows<<"  "<<col<<endl;
		}
		~matrix()//Destructor
		{
		}
		void print();
};
int main()
{
	matrix m1(2,2);
	matrix m2=m1;
}
