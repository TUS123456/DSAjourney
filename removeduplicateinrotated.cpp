#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> &arr,int start,int end){
    if(start > end){
            return 0;
    }
    int mid=start+(end-start)/2;
    cout<<mid<<endl;
    
    if(arr[mid+1] < arr[mid]){
		return arr[mid+1];
    }
    if(arr[mid-1] > arr[mid]){
		return arr[mid];
	}
    if(arr[mid] > arr[start]){
            solution(arr,mid+1,end);
    }
    else{
            solution(arr,start,mid-1);
    }
    return mid;
}
main(){
	    vector<int> nums={4,5,6,7,0,1,2};
		int start=0;
        int end=nums.size()-1;
        cout<<start<<" "<<end<<endl;
        cout<<solution(nums,start,end);
}