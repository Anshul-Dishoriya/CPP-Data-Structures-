#include <iostream>
// #include <vector>
using namespace std;

int remove_duplicates(int arr[] , int n)
{
	int ans = 1;
	for (int i =1 ; i<n ; i++)
	{
		if (arr[ans-1]!=arr[i])
		{
			arr[ans] = arr[i];
			ans++;
		}
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1,1,2,2,3,4,4,5,6,6,6,7,7,8};
	int n =14;
	int ans = remove_duplicates(arr,n);
	cout<<ans;
	return 0;
}