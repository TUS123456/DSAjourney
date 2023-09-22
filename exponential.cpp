#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &ar,int start,int end,int target){
	int ans=-1;
	int mid=start+(end-start)/2;
	while(start <= end){
		
		if(ar[mid]==target){
			ans=mid;
		}
		if(ar[mid] <= target){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int  solve(vector<int> &ar,int size,int target){
	if(ar[0]==target){
		return 0;
	}
	int i=1;
	while(i < size && ar[i] <= target){
		i=i*2;
	}
	return binary_search(ar,i/2,min(i,size-1),target);
}
main(){
	vector<int> ar={3,4,5,6,11,13,14,15,56,70};
	int target=13;
	int ans=solve(ar,ar.size(),13);
    cout<<ar[ans]<<endl;
}