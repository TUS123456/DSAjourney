#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
        void max_sum_array(vector<int> &ans,int size,int sum,int curr_index,int count,int N){
			if(curr_index >= size){
        		return;
			}
			cout<<count<<" "<<N;
			if(count==N){
				cout<<sum<<" "<<"HI";
				count=0;
				sum=0;
			}
        	sum=sum+ans[curr_index];
			max_sum_array(ans,size,sum,curr_index++,count++,N);
		}
    void print_array(vector<int> &ans){
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}
}
};
main(){
	Solution ak;
    vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);          //1 2 3 1 4 5 2 3 6 
	arr.push_back(1);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(6);
	int size=9;
	int N=3;
	int count=0;
	int index=0,sum=0;
	ak.max_sum_array(arr,size,sum,index,count,N);
}
