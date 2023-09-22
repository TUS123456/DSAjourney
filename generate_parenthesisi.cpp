#include<bits/stdc++.h>
#define num 5
using namespace std;
void solve(int open,int close,string output,vector<string> &ans){
	if(open==0 && close==0){
		ans.push_back(output);
	    return;
	}
	
	if(open > 0){
		output.push_back('(');
		solve(open-1,close,output,ans);
	    output.pop_back();
	}
	if(open < close){
		output.push_back(')');
		solve(open,close-1,output,ans);
	    output.pop_back();
	}
}
main(){
	vector<string> ans;
	string output=" ";
	solve(num,num,output,ans);
	for(auto val : ans){
		cout<<val<<" ";
	}
	
}