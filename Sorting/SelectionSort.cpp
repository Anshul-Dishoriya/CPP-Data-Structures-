#include <iostream>
#include <vector>
using namespace std ;


void SelectionSort(vector<int>& nums){
	int n = nums.size();
	for (int i = 0 ;i < n-1 ; ++i){
		int min_ind = i;
		for (int j = i+1; j < n; ++j)
		{
			if (nums[j] < nums[min_ind]){
				min_ind = j;
			}
		}
		swap(nums[i] , nums[min_ind]);
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
	SelectionSort(v);
	cout<<"\n\nAfter Sorting\n\n";
	for (int i = 0; i < 10; ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}