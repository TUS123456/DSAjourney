#include<bits/stdc++.h>
using namespace std;
bool check_charecter_in_string(char ch,vector<string> &str,int j){
	for(int i=0; i<str.size(); i++){
		if(ch != str[i][j]){
			return false;
		}
	}
	return true;
}
string solve(vector<string> &str){
	string ans;
	for(int i=0; i<str.size(); i++){
		for(int j=0; j<str[i].size(); j++){
			if(j-i == 1){
				char ch=str[i][j];
				if(check_charecter_in_string(ch,str,j)){
		   	    ans.push_back(ch);
			    }
			}
		}
	}
    return ans;
}
main(){
	vector<string> str={"cir","car"};
	set<char> st;
	string srt=solve(str);
	cout<<srt<<endl;
	for(auto ch : srt){
		st.insert(ch);
	}
	for(auto x : st){
		cout<<x<<" ";
	}
}