// Search In Rotated Sorted Array
#include <iostream>
#include <vector.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<char> v{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30
		31,32,33,34,35,36,37,38,39,40,41,42,43,44,47,55,57,59,63,73,82,92,100,102,106,109,112,116,125,163,164,0,1,2,3,4,5};
	
	int lb=0 , up = v.size()-1 ,mid;
	int x = 100;
	while( lb <= up){
		mid = (lb+up)/2;

		if (v[mid] ==x){
			cout<<mid;
			break;
		}
		else if ( v[lb] <= v[mid] ){
			if ( x >= v[lb] and  x < v[mid]) {
				up = mid-1;
			}
			else{
				lb = mid+1;
			}
		}
		else{
			if ((x < v[mid]) && x >= v[up] ) {
				lb = mid+1;
			}
			else{
				up = mid-1;
			}
		}
	}

	return 0;
}