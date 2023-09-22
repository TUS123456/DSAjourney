#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={10,1,7,6,14,9};
	int n=arr.size();
	for(int round=0; round < n-1; round++){
		bool swaped=false;
		for(int j=0; j<n-round; j++){
			if(arr[j] > arr[j+1]){
				swaped=true;
				swap(arr[j],arr[j+1]);
			}
		}
		if(swaped==false){
			break;
		}
	}
	for(auto x : arr){
		cout<<x<<" ";
	}
}