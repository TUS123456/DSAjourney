#include<bits/stdc++.h>
using namespace std;
/*void print_vec(vector<int> &ans){
	for(auto val=){
		cout<<val<<" ";
	}
}*/
void print_st(stack<int> &st,int n){
}
main(){
	vector<int> arr{10,4,6,5,3};
	int n=arr.size();
	vector<int> ans;
	stack<int> st;
	st.push(arr[n-1]);
	for(int i=n-2; i>=0; i--)
	{
		if(arr[i]>st.top()){
			cout<<arr[i]<<" ";
			st.push(arr[i]);
		}
	
	}
	//print_st(st,st.size());
	//cout<<endl<<st.size();
	
}