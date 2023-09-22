#include<bits/stdc++.h>
using namespace std;
void generate_subset(vector<int>&arr,int indii,vector<int> output,vector<vector<int>> &ans){
	if(indii > arr.size()-1){
		ans.push_back(output);
		return;
	}
	//exclude
	generate_subset(arr,indii+1,output,ans);
	//include
	
	output.push_back(arr[indii]);
	generate_subset(arr,indii+1,output,ans);
}
main(){
	vector<int> arr={1,2,3};
	vector<vector<int>> ans;
    vector<int> output;
    generate_subset(arr,0,output,ans);
    for(int i=0; i<ans.size(); i++){
    	for(int j=0; j<ans[i].size(); j++){
    		cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}