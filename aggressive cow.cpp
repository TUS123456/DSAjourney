#include<bits/stdc++.h>
using namespace std;
bool possible_exist(vector<int> &arr,int cow,int mid){
	int cow_place=arr[0];
	int cow_count=1;
	for(int i=1; i<arr.size(); i++){
		if(arr[i]-cow_place >=mid){
			cow_count++;
			cow_place=arr[i];
		}
		if(cow_count==cow){
			return true;
	    }
    }
    return false;
}
main(){
	vector<int> arr={1,2,4,8,9};
	int ans=-1;
	int cow=3;
	int size=5;
	sort(arr.begin(),arr.end());
	int start=0;
	int end=arr[arr.size()-1]-arr[0];
	while(start <= end){
		int mid=start+(end-start)/2;
		//cout<<mid<<" ";
		if(possible_exist(arr,cow,mid)){
			ans=mid;
			//cout<<ans<<endl;
		    start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	cout<<ans;
	
}