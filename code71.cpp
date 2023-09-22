#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main(){
	int arr[]={1,2,3,4,5};
	int s=5;
	int size=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	cout<<size<<endl;
	pair<int,int> m;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(s==arr[i]+arr[j]){
				m.first=i;
				m.second=j;
			cout<<i<<" "<<j<<endl;
			cout<<arr[m.first]<<" "<<arr[m.second]<<endl;
			}
			sum=0;
		}
	}
}
