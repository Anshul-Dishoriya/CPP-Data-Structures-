#include <bits/stdc++.h>
using namespace std;
void sort_with_three(int arr[ ] , int n) {
	int low = 0;
	int mid = 0;
	int high = n-1;

	while (mid <= high) {
		if (arr[mid]==0){
			swap(arr[low] , arr[mid]);
			low++ ;
			high++;
		}
		else if (arr[mid]==1){
			mid++;
		}
		else{
			swap(arr[mid] ,arr[high]);
			high--;
		}
		
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 1 , 0 ,0 , 0 , 2 ,2  ,2  ,2 ,2 ,0 ,1 ,0 ,2 ,1 ,0 ,1, 0,2 ,0 ,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "\n\nArray Before : " << endl;
	for (int i : arr) {
		cout << i << "  ";
	}
	cout << "\n\nArray After  : "<<endl;
	sort_with_three(arr , n);
	for (int i :arr){
		cout << i << "  ";
	}
	return 0;
}