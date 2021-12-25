#include <iostream>
#include <vector>
using namespace std ;

void InsertionSort(vector<int>& nums){
	int n = nums.size();
	int temp ,j;

	for ( int i =1 ; i< n ;i++){
		temp = nums[i];
		j = i-1;
		while (j>=0 && temp < nums[j]){
			nums[j+1] = nums[j];
			j--;
		}
		nums[j+1] = temp;
	}
}

int main(int argc, char const *argv[])
{
	vector<int> v(10,0);
	for (int i=0;i<10 ; i++){
		cin>>v[i];
	}
	cout<<"Before Sorting\n\n";
	for (int i = 0; i < 10; ++i)
	{
		cout<<v[i]<<" ";
	}
	InsertionSort(v);
	cout<<"\n\nAfter Sorting\n\n";
	for (int i = 0; i < 10; ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}