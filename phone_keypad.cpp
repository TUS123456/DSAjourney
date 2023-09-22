#include<bits/stdc++.h>
using namespace std;
unordered_map<int,string> mapped;
void assign_value_in_map(){
	mapped[2]="abc";
    mapped[3]="def";
    mapped[4]="ghi";
    mapped[5]="jkl";
    mapped[6]="mno";
    mapped[7]="pqrs";
    mapped[8]="tuv";
    mapped[9]="wxyz";
}
void solve(string &str,int  indii,string output,vector<string> &ans){
	if(indii >= str.size()){
		ans.push_back(output);
		return;
	}
	int str_digit=str[indii]-'0';
	string new_str=mapped[str_digit];
	for(int i=0; i<new_str.size(); i++){
		char ch=new_str[i];
		output.push_back(ch);
		solve(str, indii+1,output,ans);
		output.pop_back();
	}
}
main(){
	string str="23";
	vector<string> ans;
	string output=" ";
	int indii=0;
	assign_value_in_map();
	solve(str,indii,output,ans);
	for(auto val : ans){
		cout<<val<<" ";
	}
	
}
/*main(){
	assign_value_in_map();
	for(int i=0; i<10; i++){
		cout<<mapped[i]<<" ";
	}
}*/