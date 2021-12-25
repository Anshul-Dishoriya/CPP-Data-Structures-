#include <bits/stdc++.h>
using namespace std;
void seg_pos_neg(int arr[ ] , int n) {
	int i = -1;
	int j = n;

	while (true) {
		do {
			i++;
		} while (arr[i] < 0);

		do {

			j--;
		} while ( arr[j] >= 0);
		if (i > j) break;
		swap(arr[i] , arr[j]);
		
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {1 , 2, 4, 7 , -1 , -4 , -6, 99 , 8 , -9 , 11 , 24 , -44};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "\n\nArray Before : " << endl;
	for (int i : arr) {
		cout << i << "  ";
	}
	cout << "\n\nArray After  : "<<endl;
	seg_pos_neg(arr , n);
	for (int i :arr){
		cout << i << "  ";
	}
	return 0;
}