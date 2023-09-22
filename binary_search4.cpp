#include<bits/stdc++.h>
using namespace std;
bool binary_search(vector<int> &arr,int target){
	int start=0;
	int end=arr.size()-1;
	int mid=start+(end-start)/2;
	bool ans=false;
	while(start <= end){
		if(arr[mid]==target){
			ans=true;
		}
		if(arr[mid] > target){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
main(){
	vector<int> arr={2};
	int target=2;
	cout<<binary_search(arr,target);
}