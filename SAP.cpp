#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={3,4,2,1,0};
	int n=arr.size();
	vector<int> ans(n);
	for(int i=0; i < arr.size(); i++){
		ans[arr[i]]=i;
	}
	for(int i=0; i < ans.size(); i++){
		cout<<ans[i]<<" ";
	}
	
}