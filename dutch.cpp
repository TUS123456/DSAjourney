#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int> &arr){
	for(auto x: arr){
		cout<<x<<" ";
	}
}
main(){
	vector<int> arr={1,0,1,0,0,0,1};
	int n=arr.size()-1;
	int st=0;
	while(st <= n){
		if(arr[st]==1){
			swap(arr[st],arr[n]);
			n--;
		}
		else{
			st++;
		}
	}
	print_vec(arr);
}