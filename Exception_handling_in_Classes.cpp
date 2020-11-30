#include<iostream>
#include<exception>
using namespace std;

class krpException 
{
	int a;
	public:
			krpException()
			{
				a=10;
			}
			krpException(int n)
			{
				a=n;
			}
			class negative{};
			void check()
			{
				if(a>0)
				{
					cout<<"Entered is positive"<<endl;
				}
				else
				{
					throw negative();
				}
			}
};

int main()
{
	krpException k=10,r=-1;
	try
	{
		k.check();
		r.check();
	}
	catch(krpException::negative)
	{
		cout<<"Entered number is negative"<<endl;
	}	
	
}
