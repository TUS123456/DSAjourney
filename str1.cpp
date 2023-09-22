#include<bits/stdc++.h>
using namespace std;
bool string_match(string temp,string str1){
	if(temp.size() != str1.size()){
		return false;
	}
	bool ans=true;
	int i=0;
	while(i< temp.size()){
		if(temp[i] != str1[i]){
			ans=false;
		}
		i++;
	}
	return ans;
}
main(){
	string str="leetcode";
	string str1="leeto";
	int sze=str1.size();
	int ans=-1;
	int i=0;
	while(i < str.size()){
		string temp=str.substr(i,sze);
		bool check=string_match(temp,str1);
		if(check){
			ans=i;
			break;
		}
		i++;
	}
	cout<<ans;
}