#include <iostream>
#include <vector>
using namespace std;

vector<int> Intersection_Of_Array(vector<int>& arr1 , vector<int>& arr2 , int& k) {
	int n1 = arr1.size(), n2 = arr2.size();
	vector<int> inter(n1 + n2) ;

	int i = 0 , j = 0;
	while (i < n1 and  j < n2) {
		if (( arr1[i] == arr2[j]) and ( arr1[i] != inter[k - 1] or arr2[j] != inter[k - 1] )) {

			inter[k++] = arr1[i++];
			j++;
		}
		else if ( arr1[i] < arr2[j] ) {
			i++;
		}
		else {
			j++;
		}
	}
	// cout<<"Array of Intersection is :  ";
	// for (int i = 0; i < k; ++i)
	// {
	// 	cout<<inter[i]<<" ";
	// }
	return inter ;
}

int main(int argc, char const *argv[])
{
	vector<int> arr1(10, 0);
	vector<int> arr2(10, 0);
	cout << "Enter Elements of 1st Array in Sorted Order  \n" ;
	for (int i = 0; i < 10; ++i) {
		cin >> arr1[i];
	}
	cout << "Enter Elements of 2nd Array in Sorted Order  \n" ;
	for (int i = 0; i < 10; ++i) {
		cin >> arr2[i];
	}
	cout << "\n\nFirst Array : ";
	for (int i = 0; i < 10; ++i) {
		cout << arr1[i] << "  ";
	}
	cout << "\nSecond Array : ";
	for (int i = 0; i < 10; ++i) {
		cout << arr2[i] << "  " ;
	}
	int k = 0 ;
	cout<<"\n\nArray of Intersection is :  ";
	vector<int> inter = Intersection_Of_Array(arr1 , arr2 , k);
	for (int i = 0 ; i <= k ; i++ )
	{
		cout << i << " ";
	}
	return 0;
}