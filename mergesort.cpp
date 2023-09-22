#include<iostream>
using namespace std;
void merge(int arr[],int start,int end){
	int mid=start+end/2;
	int length1=mid-start+1;
	int length2=end-mid+1;
	int *first=new int[length1];
	int *second=new int[length2];
    int main_index=start;
	for(int i=0; i<length1; i++){
		first[i]=arr[main_index++];
	}
	main_index=mid+1;
	for(int i=0;i < length1; i++){
    	second[i]=arr[main_index++];
	}
	int index1=0;
	int index2=0;
	main_index=start;
	while(index1 < length1 && index2 < length2){
		if(first[index1] < second[index2]){
		 arr[main_index++]=first[index1++];
		}
		else{
			arr[main_index++]=second[index2++];
		}
	}
	while(index1 < length1){
		arr[main_index++]=first[index1++];
	}
	while(index2 < length2)
		arr[main_index++]=first[index2++];
}

void mergesort(int arr[],int start,int end){
	if(start >= end){
		return ;
	}
	int mid=(start+end)/2;
	// left part sorted
	mergesort(arr,start,mid);
	// right part soeted
	mergesort(arr,mid+1,end);
	merge(arr,start,end);
}
main(){
	int arr[10]={2,31,45,6,8,8,2,3,1};
	int size=9;
	int ans=0;
	mergesort(arr,0,size);
	cout<<endl;
    for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
