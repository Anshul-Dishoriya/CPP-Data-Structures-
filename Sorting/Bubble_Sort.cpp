#include <iostream>
#include <vector>
using namespace std ;


void BubbleSort(vector<int>& nums){
	int n = nums.size();
	for (int i = 0 ; i < n ; i++ ){
		for (int j = 0 ; j < n-i-1 ; j++){
			if (nums[j]> nums[j+1]){
				swap(nums[j] , nums[j+1] ) ;
			}
		}
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
	BubbleSort(v);
	cout<<"\n\nAfter Sorting\n\n";
	for (int i = 0; i < 10; ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}