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

int kthsmallest(int arr[] , int n ,int k ) {
	int low  = 0 , high = n - 1 ;
	while (low <= high) {
		int p = PatitionIndex(arr , low , high);
		if (p == k - 1) {
			return p;
		}
		else if (p > k - 1) {
			high = p - 1;
		}
		else {
			low = p + 1;
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = { 9, 8 , 7 , 6 , 7 , 6 , 5 , 4, 3, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i : arr){
		cout<< i << " ";
	}
	cout <<endl;

	int index = kthsmallest(arr , n , 3 );
	cout << "Smallest Element is :   " << arr[index-1] ;
	return 0;
}