#include<bits/stdc++.h>
using namespace std;
void solve(string str,int indii,string curr,vector<string> &ans){
	if(indii > str.size()){
		ans.push_back(curr);
		return;
	}
	
	//exclude
	solve(str,indii+1,curr,ans);
	//include
	
	curr.push_back(str[indii]);
	
	solve(str,indii+1,curr,ans);
}
main(){
	string str="abcdef";
    string curr;
    vector<string> ans;
    solve(str,0,curr,ans);
    for(auto x : ans){
    	cout<<x<<" "<<endl;
	}
}