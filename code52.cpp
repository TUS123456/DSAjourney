#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> rotateLeft(int d, vector<int> arr) {
   vector<int > temp(arr.size());
   for(int i=0;i<arr.size();i++){
      temp[(i+d)%arr.size()]=arr[i];
   }
return temp;
}
void displayvector(vector<int> v){
	int size=v.size();
	for(int i=0; i<size; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
main(){
	int x;
	int n;
	vector<int> v;
    cout<<"enter size of vector";
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		v.push_back(x);
	}
	displayvector(v);	
}
