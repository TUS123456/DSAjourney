#include<bits/stdc++.h>
using namespace std;
vector<int> next_smaller_index(vector<int> &arr){
	vector<int> ans(arr.size());
	stack<int> st;
	st.push(-1);
	for(int i=arr.size()-1; i>=0; i--){
		while(st.top() != -1 && arr[st.top()] >= arr[i]){
			st.pop();
		}
		ans[i]=st.top();
		st.push(i);
	}
	return ans;
}
vector<int> prev_smaller_index(vector<int> &arr){
	vector<int> ans(arr.size());
	stack<int> st;
	st.push(-1);
	for(int i=0; i<arr.size(); i++){
		while(st.top() != -1 && arr[st.top()] >= arr[i]){
			st.pop();
		}
		ans[i]=st.top();
		st.push(i);
	}
	return ans;
}
main(){
	vector<int> arr={5,2,6,5,4,1};
	int size=arr.size();
	int mx=INT_MIN;
	vector<int> next_smllr_idx=next_smaller_index(arr);
	vector<int> prev_smllr_idx=prev_smaller_index(arr);
	for(int i=0; i<size; i++){
		int width=arr[i];
		if(next_smllr_idx[i]==-1){
			next_smllr_idx[i]=arr.size();
		}
		int length=next_smllr_idx[i]-prev_smllr_idx[i]-1;
		int area=width*length;
		mx=max(mx,area);
	}
	cout<<mx<<" ";
}