#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &nums,int target){
        int start=0;
        int end=nums.size()-1;
        cout<<end<<endl;
		int ans=-1;
        while(start <= end){
            int mid=start+(end-start)/2;
			if(nums[mid]==target){
				return mid;
            }
            else if(nums[mid] < target){
            	start=mid+1;
			}
			else{
				end=mid-1;
			}
            //cout<<end<<endl;
        }
        return ans;
}
main(){
	vector<int> nums={1,2,3,4,5,7,7,8,8,10}; 
	int target = 8;
	cout<<search(nums,target);
}
