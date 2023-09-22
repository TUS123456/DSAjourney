#include<bits/stdc++.h>
using namespace std;
void print_vect(vector<int> ans){
	for(auto x=0;x<ans.size(); x++){
		cout<<ans[x]<<" ";
	}
}
main(){
	vector<int> arr={1,3,5,3,4};
	for(int i=0; i<arr.size();){
		int indx= arr[i]-1;
		if(arr[i] != arr[indx]){
			swap(arr[i],arr[indx]);
		}
		else{
			i++;
		}
	}
	cout<<"ans";
	for(int i=0; i<arr.size(); i++){
		if(arr[i] != i+1){
			cout<<endl<<i+1<<" "<<endl;
		}
	}
	cout<<"ans";
	print_vect(arr);
}