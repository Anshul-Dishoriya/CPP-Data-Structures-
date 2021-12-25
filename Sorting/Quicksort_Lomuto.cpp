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

int main(int argc, char const *argv[])
{
	int arr[] = { 9, 8 , 7 , 6 , 7 , 6 , 5 , 4, 3, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	QuickSort(arr , 0 , n );
	for (int i : arr) {
		cout << i << "  " ;
	}
	cout << "\n";
	return 0;
}