#include<bits/stdc++.h>
using namespace std;
int merge(vector<int> &arr,int start,int end,int mid){
	int count=0;
	int leftsize=mid-start+1;
	int rightsize=end-mid+1;
	
	int *leftarray=new int[leftsize];
	int *rightarray=new int[rightsize];
	
	int index=start;
	for(int i=0; i<leftsize; i++){
		leftarray[i]=arr[index++];
	}
	index=mid;
	for(int j=0; j<rightsize; j++){
		rightarray[j]=arr[index++];
	}
	int index1=0;
	int index2=0;
	int main_index=0;
	while(index1 < leftsize && index2 < rightsize){
		if(leftarray[index1++] > rightarray[index2++]){
			count=mid-index1+index2;
		}
	}
	return count;
	
}
int mergesort(vector<int> &arr,int start,int end){
	int count_inver=0;
	if(start >= end){
		return 0;
	}
	int mid=start+(end-start)/2;
	count_inver=count_inver+ mergesort(arr,start,mid);
    count_inver=count_inver+ mergesort(arr,mid+1,end);
    
    
    count_inver=count_inver+merge(arr,start,end,mid);
    
	return count_inver;
}
main(){
	vector<int> arr={1,1,1,2,2};
	int start=0;
	int end=5;
	cout<<mergesort(arr,start,end)+1;
}