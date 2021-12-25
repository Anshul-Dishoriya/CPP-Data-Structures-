#include <iostream>
#include <vector>
using namespace std;

// In this program we have given a array which have two sorted sub array in it's self  
//  we need to sort the array we have given mid value arter that all the element are sorted.
void Merge_Sort(vector<int>& v ,int low ,int mid ,int high){
	int n1 = mid - low + 1 , n2 = high -mid ;
	int left[n1] , right[n2];
	for (int i = 0; i <n1 ; ++i){
		left[i] = v[low+i];
	}
	for (int i = 0; i < n2 ; ++i)
	{
		right[i] = v[mid + i + 1];
	}

	int i=0,j=0,k=low;
    
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            v[k++]=left[i++];
        else
            v[k++]=right[j++];
    }
    while(i<n1){
        v[k]=left[i];
        k++ ;
        i++;

    }
    while(j<n2){
        v[k]=right[j];
        k++;
        j++;    

    }

	
	
}


int main(int argc, char const *argv[])
{
	vector<int> v(20,0);
	int mid;
	cout<<"Enter the value of Mid : ";
	cin>>mid;
	cout<<"Enter the Elements of Array :  ";
	for (int i=0;i<20 ; i++){
		cin>>v[i];
	}
	cout<<"Before Sorting\n\n";

	for (int i = 0; i < 20; ++i)
	{
		cout<<v[i]<<" ";
	}
	Merge_Sort(v , 0 , mid ,v.size());
	cout<<"After Sorting : \n\n";
	for (int i = 0; i < 20; ++i)
	{
		cout<<v[i]<<" ";
	}
	
	return 0;
}
