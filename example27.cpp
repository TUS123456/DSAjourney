#include<iostream>
using namespace std;
int binary_search(int[],int,int);
int binary_search(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid] < key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+end/2;
       }
       return -1;
}
main(){
	int index;
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr);
	index=binary_search(arr,size,9);
	cout<<index;
	
}
