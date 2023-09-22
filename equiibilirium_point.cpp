#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={2,3,5,2,2};
	int total_sum=accumulate(arr.begin(),arr.end(),0);
    int left_rem=0;
    int right_rem=4;
    while(left_rem < right_rem){
    	if(total_sum-arr[left_rem]==total_sum-arr[right_rem]){
    		break;
		}
		left_rem++;
		right_rem--;
	}
	cout<<endl<<left_rem+1;
}