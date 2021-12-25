#include <iostream>
#include <vector>
using namespace std;

int SLargest(int a[] ,int size)
{
	int first = 0 ;
	int second =-1 ;
	for (int i ; i<size ; i++) 
	{
		if(first<a[i])
		{
			second = first;
			first = a[i];
		}
		else if (first > a[i])
		{	if (second == -1 || a[i]>second)
			{
			second = a[i];
			}
		}
	}

	return second;
}

int main(int argc, char const *argv[])
{
	int a[20] , size;
	cout<<"Enter the Size of Array";
	cin>>size;
	cout<<"Enter the Elements of array : ";
	for (int i=0 ;i<size ; i++){
		cin>>a[i];
	}
	cout<<SLargest(a ,size);
	return 0;
}		