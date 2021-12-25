#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v{0 ,0 ,0 , 0, 0, 0, 0 ,0 , 0, 0, 0 , 0, 1 ,1, 1, 1 ,1, 1 ,1, 1, 1 ,1, 1, 1 ,1 ,1 ,1 ,1, 1 ,1 ,1 ,1 ,1 ,1};
	// 
	int lb = 0 ,n = v.size(), up = n-1 ,mid ,ans=-1;
	// cout<<n<<" " << v[n] <<endl;
	// cout<<up<<" " << v[up] <<endl;
	while( lb <= up) {
		mid = (lb+up)/2;
		if (v[mid] != 1){
			lb = mid+1;
		}
		else{
			if (mid==0 || v[mid] != v[mid-1]){
				ans =n - mid;
				break;
			}
			else{
				up = mid-1;
			}
		}
	}
	cout<<"Answer : "<<ans<<endl;
	return 0;
}