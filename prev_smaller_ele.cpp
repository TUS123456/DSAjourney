#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={2,5,3,7,8,1,9};
	vector<int> ans(arr.size());
	stack<int> st;
	st.push(-1);
	for(int i=0; i<arr.size(); i++){
		while(st.top() > arr[i]){
			st.pop();
		}
		ans[i]=st.top();
		st.push(arr[i]);
	}
	for(auto it : ans){
		cout<<it<<" "; 
	}
}