#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &arr,int elem,int size){
	int start=0;
	int end=size-1;
	
	while(start < end){
		int mid=start+(end-start)/2;
		
		if(arr[mid]==elem){
			return mid;
		}
		else if(arr[mid] > elem){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return 0;
}
main(){
	vector<int> arr={1,2,3,4,5,6,7,8};
	int size=arr.size();
	int elem;
	cout<<"enter element find in array";
	cin>>elem;
	cout<<"size :"<<size<<endl;
	
	cout<<binary_search(arr,elem,size);
}