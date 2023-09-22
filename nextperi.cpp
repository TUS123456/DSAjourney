#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
    void solve(vector<int> &arr,int size){
        int swap_point=INT_MIN,gre;
        for(int i=size; i>=0; i--){
            if(arr[i-1] <= arr[i]){
                swap_point=i-1;
               break;
            }
        }
        if(swap_point <= INT_MIN){
        	sort(arr.begin(),arr.end());
		}
		else{
			for(gre= size; gre > swap_point; gre--){
				if(arr[gre] > arr[swap_point]){
					break;
				}
			}
			swap(arr[swap_point],arr[gre]);
			sort(arr.begin()+swap_point+1,arr.end());
			
		}
        
    }
    void insert_data(vector<int> &ans,int n){
    	for(int i=0; i<n; i++){
    		int temp;
    		cin>>temp;
			ans.push_back(temp);
		}
	}
    void print_vector(vector<int>&arr){
    	for(int i=0; i<arr.size(); i++){
    		cout<<arr[i]<<" ";
		}
    }
};

main(){
	int n;
	cout<<"how many number inser in array";
	cin>>n;
	Solution c;
	vector<int> arr;       
    c.insert_data(arr,n);
	c.print_vector(arr);
	return 0;                            
}
