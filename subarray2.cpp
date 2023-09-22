#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,int indii,int size,vector<vector<int> >&ans){
	vector<int> output;
	if(indii == size){
		return;
	}
	
	
	
	for(int i=0; i<=indii; i++){
		output.push_back(arr[i]);
	}
	ans.push_back(output);
	indii=indii+1;
	solve(arr,indii,size,ans);
}
main(){
	vector<int> arr={1,2,3,4,5};
	int indii=0;
	int size=arr.size();
	vector<vector<int> > ans;
	vector<int> output;
	solve(arr,indii,size,ans);
	for(int i=0; i< ans.size(); i++){
    	for(int j=0; j<ans[i].size(); j++){
    		cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}