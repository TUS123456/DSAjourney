#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> &arr,int size,int student,int max){
	int curr_page=0;
	int count=1;
	for(auto x : arr){
		if(x > max){
			return false;
		}
		if(curr_page + x > max){
			count++;
			curr_page=x;
			if(count > student){
				return false;
			}
		}
		else{
			curr_page += x;
		}
	}
	return true;
}
int solve(vector<int> &arr,int size,int student){
	if(student > size){
		return -1;
	}
	int start=0;
	int end=accumulate(arr.begin(),arr.end(),0);
	int ans=-1;
	while(start <= end){
		int mid=start+(end-start)/2;
		if(ispossible(arr,size,student,mid)){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return ans;
}
main(){
	vector<int> ans={5,10,30,20,15};
	int N=5;
	int student=3;
    cout<<solve(ans,N,student);	
}