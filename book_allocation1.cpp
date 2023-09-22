#include<bits/stdc++.h>
using namespace std;
bool is_possible(vector<int> &arr,int student,int size,int max){
	int curr_page_sum=0;
	int count=1;
	for(auto x : arr){
		if(x > max){
			return false;
		}
		if(curr_page_sum + x > max){
			count++;
			curr_page_sum=x;
			if(count>student){
				return false;
			}
		}
		else{
			curr_page_sum = x + curr_page_sum;
		}
	}
	return true;
}
main(){
	vector<int> arr={10, 1, 2, 7, 5};
	int size=5;
	int student=3;
	int start=0;
	int end=accumulate(arr.begin(),arr.end(),0);
	int ans=0;
	while(start <= end){
		int mid=start+(end-mid)/2;
		if(is_possible(arr,student,size,mid)){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	cout<<ans;
}