#include<iostream>
using namespace std;
int binary_search(int [],int);
main(){
	int target=9;
	int  nums[] ={-1,0,3,5,9,12};
	int size=sizeof(nums)/sizeof(nums[0]);
	int result=binary_search(nums,target,size);
}
int binary_search(int nums[],int target,int size){
	int mid=size/2;
	if(target==nums[mid]){
		return(mid);
	}
	if(target >= nums[mid]){
		)
	}
	
}
