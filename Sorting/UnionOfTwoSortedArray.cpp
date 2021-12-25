#include <iostream>
#include <vector>
using namespace std;

vector<int> Union_Of_Array(vector<int> arr1 , vector<int> arr2) {
	int n1 = arr1.size(), n2 = arr2.size();
	vector<int> v ;
	int i = 0, j = 0, k = 0;
	while (i < n1 and j < n2){
		cout<<"Loop is Runing : ";
		if (arr1[i] == arr2[j] and arr1[i]!=v[k-1]){
			cout<<arr1[i]<<" ";
			i++;
			k++;
		}
		else if (arr1[i] < arr2[j] and arr1[i]!=v[k-1]){
			cout<<arr1[i]<<" ";
			i++;
			k++;
		}
		else if (arr1[i] > arr2[j] and arr2[j]!=v[k-1]){
			cout<<arr2[j]<<" " ;
			j++;
			k++;
		}
	}

	while (i < n1){
		if ( arr1[i] != v[k-1] ){
			cout<<arr1[i]<<" ";
			i++ ,k++;
		}
	}
	while (j < n2){
		if ( arr2[j] != v[k-1] ){
			cout<<arr2[j]<<" ";
			j++ ,k++;
		}
	}
	
}


int main(int argc, char const *argv[]){
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
	Union_Of_Array(arr1 , arr2);
	// cout<<"\n\nUnion Of Arrays Are : ";
	// vector<int> union1 = Union_Of_Array(arr1 , arr2);
	
	// for (int i=0 ; i<union1.size(); i++){
	// 	cout<<union1[i] <<" ";
	// }
	return 0;
}



// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> Union_Of_Array(vector<int>& arr1 , vector<int>& arr2) {
// 	int n1 = arr1.size(), n2 = arr2.size();
// 	vector<int> v ;
// 	int i = 0, j = 0, k = 0;
// 	while (i < n1 and j < n2){
// 		if (arr1[i] == arr2[j] and arr1[i]!=v[k-1]){
// 			v.push_back(arr1[i]);
// 			i++;
// 			k++;
// 		}
// 		else if (arr1[i] < arr2[j] and arr1[i]!=v[k-1]){
// 			v.push_back(arr1[i]);
// 			i++;
// 			k++;
// 		}
// 		else if (arr1[i] > arr2[j] and arr1[i]!=v[k-1]){
// 			v.push_back(arr2[j]);
// 			j++;
// 			k++;
// 		}
// 	}

// 	while (i < n1){
// 		if ( arr1[i] != v[k-1] ){
// 			v.push_back(arr1[i]);
// 			i++ ,k++;
// 		}
// 	}
// 	while (j < n2){
// 		if ( arr2[j] != v[k-1] ){
// 			v.push_back(arr2[j]);
// 			j++ ,k++;
// 		}
// 	}
// 	cout<<"\n\nOutput: ";
// 	for (int i=0 ; i<v.size(); i++){
// 		cout<<v[i] <<" ";
// 	}
// }


// int main(int argc, char const *argv[]){
// 	vector<int> arr1(10, 0);
// 	vector<int> arr2(10, 0);
// 	cout << "Enter Elements of 1st Array in Sorted Order  \n" ;
// 	for (int i = 0; i < 10; ++i) {
// 		cin >> arr1[i];
// 	}
// 	cout << "Enter Elements of 2nd Array in Sorted Order  \n" ;
// 	for (int i = 0; i < 10; ++i) {
// 		cin >> arr2[i];
// 	}
// 	cout << "\n\nFirst Array : ";
// 	for (int i = 0; i < 10; ++i) {
// 		cout << arr1[i] << "  ";
// 	}
// 	cout << "\nSecond Array : ";
// 	for (int i = 0; i < 10; ++i) {
// 		cout << arr2[i] << "  " ;
// 	}
// 	cout<<"\n\nUnion Of Arrays Are : ";
// 	vector<int> union1 = Union_Of_Array(arr1 , arr2);
	
// 	for (int i=0 ; i<union1.size(); i++){
// 		cout<<union1[i] <<" ";
// 	}
// 	return 0;
// }