#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr){
	int ans=0;
	for(int i=0; i<arr.size(); i++){
		int index=abs(arr[i]);
		if(arr[index] < 0){
			ans=index;
			break;
		}
		arr[index]*=-1;
	}
	return ans;
}
main(){
	vector<int> arr={1,3,4,2,2};
	cout<<solve(arr);
}