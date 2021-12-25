#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int PatitionIndex(int arr[] , int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low ; j <= high - 1 ; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i] , arr[j]);
		}
	}
	swap(arr[i + 1] , arr[high]);
	return i + 1;
}

void QuickSort(int arr[] , int low , int high) {
	if (low < high) {
		int p = PatitionIndex(arr , low , high);
		QuickSort(arr , low , p - 1);
		QuickSort(arr , p + 1 , high);
	}
}

int min_diff(int arr[] , int n , int m) {
	QuickSort(arr , 0 , n );
	int res = arr[m - 1] - arr[0];
	for (int i = 1 ; (i + m - 1) < n ; i++  ) {
		res = min(res , arr[i + m - 1] - arr[i] );
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int arr[] = { 7, 3 , 2 , 4 , 9 , 12 , 56 };
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	int ans = min_diff(arr , n , 3 );
	cout << ans ;

	     return 0;
}