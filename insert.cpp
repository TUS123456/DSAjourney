#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &ans){
	for(auto val : ans){
		cout<<val<<" ";
	}
	cout<<endl;
}
main(){
	vector<int> arr={1,2,0,0};
	arr.insert(arr.begin(),10);
	print_vector(arr);
	cout<<15/10<<endl;
}