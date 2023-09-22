#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
main(){
	int arr[]={1,2,3,4,4,5};
    int no=2;
	int size=sizeof(arr)/sizeof(arr[0]);
	int n=size-1;
	cout<<n<<" ";
	int mod=no%n;
    for(int i=0; i<=n; i++){
    	cout<<(arr[mod+i]%n)<<" ";
	}
}
