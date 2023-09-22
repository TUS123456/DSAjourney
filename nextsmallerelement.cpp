#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={5,6,2,3,1,7};
	vector<int> ans(arr.size());
	stack<int> st;
	st.push(-1);
	for(int i=arr.size()-1; i>=0; i--){
		while(st.top() >= arr[i]){
			st.pop();
		}
		ans[i]=st.top();
		st.push(arr[i]);
	}
	for(auto it : ans){
		cout<<it<<" "; 
	}
	
}