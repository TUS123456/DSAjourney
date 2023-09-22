#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort_vector(vector<int> &ans){
	cout<<ans.size();
	cout<<endl;
	sort(ans.begin(),ans.end(),greater<int>());
}
void print_vect(vector<int> &ans){
	for(int i=0;i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}
} 
void unique_ele(vector<int> &ans){
	ans.erase(unique(ans.begin(),ans.end()),ans.end());
}
main(){
	vector<int> ans;
	ans.push_back(89);
	ans.push_back(76);
	ans.push_back(65);
	ans.push_back(89);
	ans.push_back(76);
	ans.push_back(12);
	ans.push_back(47);
	print_vect(ans);
	sort_vector(ans);
	unique_ele(ans);
	print_vect(ans);
}
