#include<bits/stdc++.h>
using namespace std;
void solution(vector<int> &arr,vector<vector<int>> &ans,int target,vector<int> &temp,int indii){
	//main code
	if(target==0){
		ans.push_back(temp);
		return;
	}
	if(target <0){
		return;
	}
	unordered_map<int,bool> visited;
    for(int i=indii; i<arr.size();  i++){
    	if(visited.find(arr[i]) != visited.end()){
    		continue;
		}
		visited[arr[i]]=true;
		temp.push_back(arr[i]);
    	solution(arr,ans,target-arr[i],temp,i+1);
    	temp.pop_back();
	}
}
main(){
	vector<int> arr={10,1,2,7,6,1,5};
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	vector<int> temp;
	int target=8;
	solution(arr,ans,target,temp,0);
	for(auto it : ans){
		for(auto pt : it){
			cout<<pt<<" ";
		}
		cout<<endl;
	}
	
	
}