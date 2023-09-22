#include<bits/stdc++.h>
using namespace std;
bool capacity_full_fill(vector<int> &arr,int ship_capacity,int day){
	int day_count=0;
	int capacity=0;
	for(auto val : arr){
		if(val > ship_capacity){
			return false;
		}
		if(capacity+val > ship_capacity){
			day_count++;
			capacity=val;
		}
		capacity=capacity+val;
	}
	if(day_count <= day){
		return true;
	}
	return false;
}
int solution(vector<int> &arr,int start,int end,int day){
	int ans=0;
	while(start <= end){
		int mid=start+(end-mid)/2;
		if(capacity_full_fill(arr,mid,day)){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return ans;
}
main(){
	vector<int> arr={1,2,3,4,5,6,7,8,9,10};
	int day=1;
	sort(arr.begin(),arr.end());
	int start=0;
	int end=accumulate(arr.begin(),arr.end(),0);
    int ans=solution(arr,start,end,day);
	cout<<endl<<ans;
}