/*Define template functions for compare and use it in the algorithms like bubble sort,
insertion sort, merge sort. */
#include<bits/stdc++.h>
using namespace std;

template<typename T>
T compare(T a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void BubbleSort(T a[],int n)
{
	
}
void InsertionSort(T a[],int n)
{
}
void MergeSort(T a[],int n)
{
	
}
int main()
{
}

