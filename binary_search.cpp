#include<bits/stdc++.h>
using namespace std;
int find_pivot_ele(vector<int> &arr,int start,int end){
        int mid=start+(end-start)/2;
		while(start <= end){
           if(arr[mid] > arr[mid+1]){
                return mid;
           }
           if(arr[mid] < arr[mid-1]){
                return mid-1;
           }
           if(arr[start] < arr[mid]){
           	    start=mid+1;
		   }       
		   else{
		   	    end=mid-1;
		   }
		   mid=start+(end-start)/2;
		}
}
bool search(vector<int>& arr, int target) {
        int start=0;
        int end=arr.size()-1;
        int indii=find_pivot_ele(arr,start,end);
        while(start <= end){
            cout<<start<<" "<<end;
            //cout<<indii;
            if(indii==-1){
                return false;
            }
            if(arr[indii]==target){
                return true;
            }
            if(arr[indii] > arr[start]){
                start=indii+1;
            
			}
            else{
            	end=indii-1;
                cout<<end;
			}
			indii=find_pivot_ele(arr,start,end);
        }
        return false;
    }
main(){
	vector<int> nums={2,5,6,0,0,1,2};
	   cout<<search(nums,0);
}