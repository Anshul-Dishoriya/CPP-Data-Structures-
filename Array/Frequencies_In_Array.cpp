#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[] = {10 , 10 , 10 , 3 , 3 , 
		3 ,3 , 3 , 3, 4 , 4 , 4 , 4 , 4 , 4};
	int temp = 0 , num = arr[0] , n = 9;
	for (int i = 0; i < n ; i++)
	{
		if (arr[i] != num)
		{
			cout << num << " " << temp << endl ;
			num = arr[i];
			temp = 1;
		}
		else
		{
			temp++;
		}
	}
	if (n == 1 || arr[n - 1] != arr[n - 2] )
	{
		cout << arr[n-1] << " " << 1 ;
	}
	else
	{
		cout << arr[n-1]	;	
	}
	return 0;
}