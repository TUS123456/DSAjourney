#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
main(){
	cout<<"enter size";
	int mx=0,prv,rst;
	int N;
	cin>>N;
	int arr[N];
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	for(int i=0; i<N; i++){
		if(mx < arr[i]){
			prv=mx;
			rst=min(prv,arr[i]);
			mx=arr[i];
		}
	}
	cout<<rst<<" ";
	
    }  

