#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void print_vector(vector<int> arr){
	for(int i=0; i<arr.size(); i++)
	{
     cout<<arr[i]<<" ";		
	}
}
void pre_fix_sum(int start,int end,int arr[]){
    vector<int> vec;	
	int ans=0;
	for(int i=start; i < end; i++){
		ans=ans+arr[i];
	    vec.push_back(ans);
	}
	print_vector(vec);
	
}
main(){
	int arr[]={2,3,5,6,7};
	int start=0;
	int end=3;
	for(int i=0; i<end; i++)
	{
     cout<<arr[i]<<" ";		
	}
	cout<<endl;
	pre_fix_sum(start,end,arr);
}
