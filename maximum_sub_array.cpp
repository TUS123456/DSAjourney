#include<bits/stdc++.h>
using namespace std;
int maximum_sub_array(vector<int> &num,int start,int end){
	if(start==end){
		return num[start];
	}
	int max_left_sum=INT_MIN,max_right_sum=INT_MIN;
	
	int mid=start+((end-start) >> 1);
	//*****//
	int left_element=maximum_sub_array(num,start,mid);
	int right_element=maximum_sub_array(num,mid+1,end);
	
	
	int left_sum=0,right_sum=0;
	for(int i=mid; i>=start; i--){
		left_sum += num[i];
		max_left_sum = max(max_left_sum,left_sum);
	}
	for(int i=mid+1; i<=end; i++){
		right_sum += num[i];
		max_right_sum=max(max_right_sum,right_sum);
	} 
	int cross_sum=max_left_sum+max_right_sum;
	return max(cross_sum,max(left_element,right_element));
} 
main(){
	vector<int> arr={};
	cout<<maximum_sub_array(arr,0,arr.size()-1);
}