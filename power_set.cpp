#include<bits/stdc++.h>
using namespace std;
void solve(string str,int indii,string temp,vector<string> &ans){
	if(indii == str.size()){
		ans.push_back(temp);
		return;
	}
	//exclude
	solve(str,indii+1,temp,ans);
	
	//include
	temp.push_back(str[indii]);
	solve(str,indii+1,temp,ans);
}
main(){
	string str="aaa";
	string temp=" ";
	vector<string> ans;
	solve(str,0,temp,ans);
	for(auto x : ans){
		cout<<x<<" ";
	}
}