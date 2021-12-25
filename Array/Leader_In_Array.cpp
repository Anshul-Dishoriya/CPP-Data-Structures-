#include <iostream>
using namespace std;

void leader(int arr[] , int n)
{	
	int curr_leader = arr[n-1];
	cout << curr_leader<<"  ";
	for ( int i = n-2 ; i>=0 ; i-- )
	{
		if (arr[i] > curr_leader)
		{
			curr_leader = arr[i];
			cout<<arr[i]<<"  ";
		}
	}
}

int main(int argc, char const *argv[])
{
	int n = 10, arr[10];// = {7 ,10,4,10,6,5,2};
	for (int i=0 ;i<n ; i++){
		cin>>arr[i];
	}
	leader(arr ,n);
	return 0;
}