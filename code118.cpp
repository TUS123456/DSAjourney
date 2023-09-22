#include<iostream>
#include<vector>
using namespace std;
main(){
	stack<int> stack;
	int arr[]={4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<size;
		int start=0;
		int end=size-1;
	while(start < end){
		if(arr[start] > arr[end]){
			stack.push_back(arr[start]);
			start++;
		}
		else{
			return "NO";
		}
	}
	if(stack.size()==size){
		return "YES";
	}
	else{
		return "NO";
	}
}
