#include <iostream>
using namespace std;

int Count_Inversions(int arr[] , int n){
	int count = 0;
	for (int i = 0 ; i < n ; i++ ){
		for (int j = i+1; j < n; ++j)
		{
			if(arr[i] > arr[j]){
				count++;
			}
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int arr[] = {2 , 4 , 1 , 3 , 5 ,5 ,5 , 7 , 22 ,55 ,878 , 9,100};
	int n = sizeof(arr) / sizeof(arr[0]);
	int ans = Count_Inversions(arr ,n);
	cout<<"Inversions : "<<ans;

	return 0;
}