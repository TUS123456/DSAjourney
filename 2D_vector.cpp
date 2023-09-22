#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	vector<vector<int>> arr(5,vector<int> (4,0));
	
	for(auto ptr : arr){
		for(auto sec : ptr){
			cout<<sec<<" ";
		}
		cout<<endl;
	}
}