#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
	for(int i=0; i<arr.size()-1; i++){
		for(int j=i; j<arr.size(); j++){
			for(int k=i; k<=j; k++){
				cout<<arr[k]<<" "; 
			}
			cout<<endl;
		}
		cout<<endl;
	}
}