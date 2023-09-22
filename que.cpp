#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &ans){
	for(auto x : ans){
		cout<<x<<" ";
	}
}
main(){
	vector<int> arr={};
	vector<int> ans;
	int k=3;
	deque<int> dque;
	int size=arr.size();
	for(int i=0; i<size; i++){
		if(!dque.empty() && dque.front()==i-k){
			dque.pop_front();
		}
		while(!dque.empty() && arr[dque.front()] < arr[i]){
			dque.pop_back();
		}
		dque.push_back(i);
		if(i >= k-1){
			ans.push_back(arr[dque.front()]);
		}
	}
	print_vector(ans);
}