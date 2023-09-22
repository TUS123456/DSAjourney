#include<bits/stdc++.h>
using namespace std;
int merge_sort(vector<int> &arr,vector<int> &temp,int start,int end,int mid){
	int i=start; int k=start; int j=mid+1;
	int count=0;
	while( i <= mid && j <= end){
		if(arr[i] <= arr[j]){
			temp[k++]=arr[i++];
		}
		else{
			count=mid-i+1;
			
			temp[k++]=arr[j++];
		}
	}
	while( i <= mid){
		temp[k++]=arr[i++];
	}
	while( j <= end){
		temp[k++]=arr[j++];
	}
	while(start <= end){
		arr[start]=temp[start];
		++start;
	}
	return count;
}
int apply_mergesort(vector<int> &arr,vector<int> &temp,int start,int end){
	if(start >= end){
		return 0;
	}
	int count=0;
	int mid=start+(end-start)/2;
	count +=apply_mergesort(arr,temp,start,mid);
	count +=apply_mergesort(arr,temp,mid+1,end);
	count +=merge_sort(arr,temp,start,end,mid);
    return count;
}
main(){
	vector<int> arr={1,1,2,2};
	vector<int> temp(arr.size());
	cout<<apply_mergesort(arr,temp,0,arr.size()-1);
}