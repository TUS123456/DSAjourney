#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printvec(vector<pair<int,int> > &v){
for(int i=0; i<v.size(); i++){
	cout<<v[i].first<<" "<<v[i].second<<endl; 
}
}
void swap_vector(vector<pair<int,int> > &v,vector<pair<int,int> > &v1){
	swap(v,v1);
}
int main(){
	int n;
	cin>>n;
	vector<pair<int,int> > v;
	for(int i=0; i<n; i++){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	cout<<endl;
	printvec(v);
    //swap_vector(v,v[4]);
    printvec(v);
}
