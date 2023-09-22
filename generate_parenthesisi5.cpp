#include<bits/stdc++.h>
using namespace std;
void generate_all_permutation(string &str,int indii,vector<string> &ans){
	//base case
	if(indii >= str.length()){
		ans.push_back(str);
	    return;
	}
	//main code
	for(int idex=indii; idex< str.length(); idex++){
		swap(str[idex],str[indii]);
		generate_all_permutation(str,indii+1,ans);\
		swap(str[idex],str[indii]);
	}
}
void print_arr(vector<string> &ar){
	for(auto it : ar){
		cout<<it<<" ";
		cout<<endl;
	}
}
main(){
	vector<string> ans;
	string str="abcd";
	generate_all_permutation(str,0,ans);
	sort(ans.begin(),ans.end());
	print_arr(ans);
}