#include<iostream>
using namespace std;
main(){
	int i=0;
	int arr[]={1,3,4,2};
	int start=0;
	int sum=0;
	int x=7;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<size; i++){
	if(sum>x && start <i-1){
		sum = sum-arr[start];
	    start++;
	}
	if(sum==x){
		cout<<start<<" "<<i-1;
	}
	if(i<size){
		sum=sum+arr[i];
	}
	}
}
