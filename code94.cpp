#include<iostream>
using namespace std;
int array_sum(int arr[],int size){
	if(size==0){
		return 0;
    }
    if(size==1){
    	return arr[0];
	}
	int part=array_sum(arr+1,size-1);
	int sum=arr[0]+part;
	return sum;
}
main(){
	int arr[5]={2,4,9,9,9};
	int size=5;
	int ans=array_sum(arr,size);
    cout<<ans;
}
