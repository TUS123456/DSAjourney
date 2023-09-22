#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int> &arr,int i, int s){
	if(i>=s){
		return;
	}
	cout<<arr[i]<<" ";
	print_vec(arr,++i,s);
}
main(){
	vector<int> arr={1,2,3,4,5};
	int i=0;
	print_vec(arr,i,5);
}