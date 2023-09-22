#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,int start,stack<int> &stk,int &size){
	if(size<0){
		return;
	}
	int ele=arr[start++];
	size--;
	//cout<<ele<<" ";
	stk.push(ele);
    solve(arr,start,stk,size);
}
void print_vector(vector<int> &arr){
	for(auto x=0; x<arr.size(); x++){
		cout<<arr[x]<<" ";
	}
}
void print_stack(stack<int> stk){
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}
}
main(){
	vector<int> arr={4,3,2,1,5,6};
	stack<int> stk;
	int size=arr.size()-1;
	//cout<<size;
	solve(arr,0,stk,size);
	print_stack(stk);
	//print_vector(arr);
}