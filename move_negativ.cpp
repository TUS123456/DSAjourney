#include<bits/stdc++.h>
using namespace std;
void print_vece(vector<int> &ans){
	for(auto x: ans){
		cout<<x<<" ";
	}
}
main(){
	vector<int> arr={1,2,-3,4,-5,6};
	int start=0;
	int end=arr.size()-1;
	while(start < end){
		if(arr[start] < 0){
			start++;
		}
		if(arr[end] > 0){
			end--;
		}
		else{
			swap(arr[end],arr[start]);
		}
	}
	print_vece(arr);
}