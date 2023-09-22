//generate al permutation
#include<bits/stdc++.h>
using namespace std;
void generate_all_permutation(string &str,int indii,vector<string> &ans){
	if(indii >= str.length()){
		ans.push_back(str);
		return;
	}
	for(int i=indii; i<str.length(); i++){
		swap(str[indii],str[i]);
		generate_all_permutation(str,indii+1,ans);
		swap(str[indii],str[i]);
	}
}
void print_arr(vector<string> &arr){
	for(auto it : arr){
		cout<<it<<endl;
	}
}
main(){
	vector<string> ans;
	string str="abcd";
	generate_all_permutation(str,0,ans);
	sort(ans.begin(),ans.end());
	print_arr(ans);
}