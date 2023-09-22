#include<bits/stdc++.h>
using namespace std;
void solution(int n,int k,int indii,vector<int> &temp,vector<vector<int>> &ans){
    //main code
    if(temp.size()==k){
    	ans.push_back(temp);
    	return;
	}
	if(indii > n){
		return;
	}
	for(int i=indii; i<=n; i++){
		temp.push_back(i);
	    solution(n,k,i+1,temp,ans);
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
	    int n=4;
	    int k=2;
        vector<vector<int>> ans;
        vector<int> temp;
        int indii=1; 
        solution(n,k,indii,temp,ans);
        print_vec(ans);
    }