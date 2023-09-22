#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
unordered_map<int,bool> visited(0);
void print_map(){
	for(auto it : visited){
		cout<<it.first<<" "<<it.second<<endl;
	}
}
bool is_valid(int num,vector<int> &nums2){
        for(int i=0; i<nums2.size(); i++){
            if(!visited[num] &&num==nums2[i]){
                return false;
                
				break;
            }
        }
        
        print_map();
        return true;
    }
    vector<int> finddifference(vector<int> &nums1,vector<int> &nums2){
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            if(!nums1[i] && is_valid(nums1[i],nums2)){
                ans.push_back(nums1[i]);
                visited[nums1[i]]=true;
			}
        }
        return ans;
    }
    vector<int> find2difference(vector<int> &nums1,vector<int> &nums2){
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++){
            if(!nums2[i] && is_valid(nums2[i],nums1)){
                ans.push_back(nums2[i]);
                visited[nums2[i]]=true;
            }
        }
        return ans;
    }
void print(vector<vector<int>> &ans){
	for(auto it : ans){
		for(auto ptr : it){
			cout<<ptr<<" ";
		}
		cout<<endl;
	}
}
void findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> from_first_second=finddifference(nums1,nums2);
        vector<int> from_second_first=find2difference(nums1,nums2);
        ans.push_back(from_first_second);
        ans.push_back(from_second_first);

        print(ans);
}
main(){
	vector<int> nums1={1,2,3,3};
	vector<int> nums2={1,1,2,2};
	
	
	findDifference(nums1,nums2);
}