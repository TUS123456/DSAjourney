#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr,int start,int end){
	if(start >= end){
		return;
	}
	swap(arr[start],arr[end]);
	reverse(arr,++start,--end);
}
main(){
	vector<int> arr={8,6,9,5,4};
	int start=0;
	int end=arr.size()-1;
	reverse(arr,start,end);
	for(auto val : arr){
		cout<<val<<" ";
	}
}