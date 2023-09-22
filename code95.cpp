#include<iostream>
using namespace std;
bool linear_search(int arr[],int size, int k){
	if(size==0){
		return 0;
	}
	if(arr[0]==k){
		return 1;
	}
	else{
	    bool ans=linear_search(arr+1,size-1,k);
	    return ans;
	}
}
main(){
	bool ans;
	float key=4.0;
	int arr[]={1,2,4,5,6};
	int size=5;
	ans=linear_search(arr,size,key);
	if(ans){
		cout<<"search element found";
	}
	else{
		cout<<"search element not found";
	}
	 
}
