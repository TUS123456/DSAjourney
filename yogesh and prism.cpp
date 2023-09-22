#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void print_array(int arr[],int n){
	for(int i=0; i<=n-1; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
main(){
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	arr[0]=0;
	arr[1]=0;
	print_array(arr,size);
	for(int i=2; i<=size-1; i++){
	cout<<"c";
	arr[2*i]=0;
	}
	print_array(arr,size);
}

