#include<bits/stdc++.h> // you don't need this for this example
#include<iostream>
//using namespace std;   <-- never use this. it is very bad!
class complex
{
    int n; // yu don't need i
    int *x=new int[n];
    int *y=new int[n];
    public:
    complex(int n_value):n(n_value) // <--first initialize n like this
    {
        std::cout<<"enter values of x:"<<std::endl;
        for(int i=0;i<n;++i) // <-- try to use pre-increment instead
        std::cin>>*(x+i);
        std::cout<<"enter values of y:"<<std::endl; //<-- do not forget about the other dynamic array
        for(int i=0;i<n;++i) // <-- try to use pre-increment instead
        std::cin>>*(y+i);

        std::cout<<"values of x and y are:"<<std::endl;
        for(int i=0;i<n;++i){ // <-- try to use pre-increment instead
            std::cout<<"x[" << i << "] is " << *(x+i)<<std::endl;
            std::cout<<"y[" << i << "] is " << *(y+i)<<std::endl;
        }
    }
    complex& /*here the return type should be reference of the type*/ operator =(const complex& another)// for this operator you should get another variable of this type as const reference
    {
        delete[] x; // <-- do NOT forget to delete the dynamic memory first
        delete[] y; // <-- do NOT forget to delete the dynamic memory first
        n = another.n; //reassign n from another
        //call for another dynamic memory again
        x=new int[n];
        y=new int[n];

        std::cout<<"values of y and x are:"<<std::endl;
        for(int i=0;i<n;++i) // <-- try to use pre-increment instead
        {
            *(x+i) = *(another.x+i);
            *(y+i) = *(another.y+i); // do not forget about the other dynamic array, the y
            std::cout<<"x[" << i << "] is " << *(x+i)<<std::endl;
            std::cout<<"y[" << i << "] is " << *(y+i)<<std::endl;
        }
        return *this; //
    }
    complex(const complex & another):n(another.n) // <--first initialize n like this // for this operator you should get another variable of this type as const reference
    {
        //here, try this one your self! Tip it is like assignment operator!
        std::cout<<"copy constructor called:"<<std::endl;
    }
    ~complex()
    {
        std::cout<<"destructorr called:"<<std::endl;
    }
};
int main()
{
    complex obj1(5);
    complex obj2(obj1);
    obj2=obj1;
    return 0;
}
