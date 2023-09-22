#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &arr){
	for(auto x : arr){
		cout<<x<<" ";
	}
	cout<<endl;
}
void sort_array(vector<int> &arr){
	for(int i=0; i<arr.size(); i++){
		int minIdex=i;
		for(int nxt_ind=i+1; nxt_ind <arr.size(); nxt_ind++){
			if(arr[nxt_ind] < arr[minIdex]){
				minIdex=nxt_ind;
			}
		}
		swap(arr[minIdex],arr[i]);
	}
}
main(){
	vector<int> arr={10,1,4,8,5,7};
	print_vector(arr);
	sort_array(arr);
	print_vector(arr);
	
}