#include <iostream>
#include <vector>
using namespace std;

void Merge(int arr1[] , int arr2[] , int size1 , int size2) {
	int i = 0 , j = 0 ;
	while (i < size1  and j < size2) {
		if (arr1[i] <= arr2[j]) {
			cout << arr1[i] << "  ";
			i++;
		}
		else{
			cout << arr2[j] << "  ";
			j++;
		}
	}
	
	while (j < size2 ){
		cout << arr2[j] <<" " ;
		j++;
	}

	
	while (i < size1 ){
		cout << arr1[i] << "  " ;
		i++;
	}
}


int main(int argc, char const *argv[])
{
	int arr1[] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100};
	int arr2[] = {5 , 15 , 25 , 35 , 45 , 55 , 65 , 75 , 85 , 95};
	int size1 = 10;
	int size2 = 10;
	Merge(arr1 , arr2 , size1 , size2);

	return 0;
}