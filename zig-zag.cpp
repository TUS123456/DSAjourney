#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={4, 3, 7, 8, 6, 2, 1};
	int n=7;
	bool flag=true;
	for(int i=0; i<=n; i++){
		if(flag){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		else{
				if(arr[i]<arr[i+1]){
					swap(arr[i],arr[i+1]);
				}
		}
		flag=~flag;
		}
		
	} 
	for(auto val : arr){
		cout<<val<<" ";
	}
}