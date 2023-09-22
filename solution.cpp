#include<bits/stdc++.h>
using namespace std;
main(){
	int arr[3][4];
    for(int i=0; i<3; i++){
    	for(int j=0; j<4; j++){
    		int val;
    		cin>>val;
    		arr[i][j]=val;
		}
	}
	for(int i=0; i<3; i++){
    	for(int j=0; j<4; j++){
    		cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	vector<int> ans;
	int mx=INT_MIN;
	for(int i=0; i< 3; i++){
		for(int j=0; j<4; j++){
			mx=max(mx,arr[i][j]);
		}
		cout<<mx<<endl;
		ans.push_back(mx);
		mx=INT_MIN;
	}	
}