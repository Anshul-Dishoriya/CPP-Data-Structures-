#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;
// this is iterative solution
int main(int argc, char const *argv[])
{
	int mid , lb = 0, n = 16,up = n-1,  arr[] = {5 , 10 , 10 , 15 , 20 , 20 , 20, 34 , 34 , 34 , 34, 34 , 34 , 34 , 34  , 40};
	int x = 10 , ans = -1;
	while (lb <= up)
	{
		mid = (lb + up) / 2;
		if (x > arr[mid]) {
			lb = mid + 1;
		}
		else if (x < arr[mid]) {
			up = mid - 1;
		}
		else {
			if (mid == n-1 || arr[mid] != arr[mid + 1]) {
				ans =  mid;
				// cout<< mid;
				break;
			}
			else {
				lb = mid + 1;
			}
		}
	}
	cout<<ans;

	return 0;
}


// this is Recursive Solution
// int first_occ(int arr[] , int lb , int up , int x)
// {
// 	if (lb > up ){
// 		return -1;
// 	}

// 	int mid  = (lb+up)/2;

// 	if (x > arr[mid]){
// 		return first_occ(arr , mid+1, up ,x);  }

// 	else if (x < arr[mid])
// 	{
// 		return first_occ(arr , lb , mid-1 ,x);
// 	}
// 	else
// 	{
// 		if (mid == 0 || arr[mid]!=arr[mid-1]){
// 			return mid;
// 		}
// 		else{
// 			return first_occ(arr , lb , mid-1 ,x);
// 		}
// 	}
// }
// int main()
// {
// 	int lb=0, up=15,  arr[] = {5 ,10 ,10 ,15 ,20 ,20 ,20, 34 ,34 ,34 ,34,34 ,34 ,34 ,34  , 40};
// 	int x = 54;
// 	int ans = first_occ(arr , lb , up ,x);
// 	cout<<ans;
// 	return 0;
// }