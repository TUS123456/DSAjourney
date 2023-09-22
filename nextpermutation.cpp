#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int>);
class Solution{
	public:
    void solve(vector<int> &arr,int size){
        int swap_point=0;
        for(int i=size; i>0; i--){
            if(arr[i-1] > arr[i]){
               swap_point=i;
               swap(arr[i-1],arr[size]);
            }
        }
        sort(arr.begin()+swap_point,arr.end());
    }
    void print_vector(vector<int>&arr){
    	for(int i=0; i<arr.size(); i++){
    		cout<<arr[i]<<" ";
		}
	}
};
main(){
	Solution s;
	vector<int> arr={1,2,3};
	s.solve(arr,arr.size());                              
	print_vector(arr);
	return 0;
}
