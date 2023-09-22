#include<bits/stdc++.h>
using namespace std;
void solution(vector<int> &arr,int target,int indii,vector<int> &temp,vector<vector<int>> &ans){
	//base
	if(target==0){
		ans.push_back(temp);
		return;
	}
	if(target < 0){
		return;
	}
	
	//main code
	for(int i=0; i<arr.size(); i++){
		temp.push_back(arr[i]);
		solution(arr,target-arr[i],i,temp,ans);
		temp.pop_back();
	}
}
void print_vec(vector<vector<int>> &arr){
	for(auto it : arr){
		for(auto pt : it){
			cout<<pt<<" ";
		}
		cout<<endl;
	}
}
main(){
	vector<int> arr={2,3,6,7};
	vector<vector<int>> ans;
	vector<int> temp;
	int target=7;
	solution(arr,target,0,temp,ans);
	print_vec(ans);
}