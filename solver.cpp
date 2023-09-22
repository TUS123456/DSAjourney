#include<bits/stdc++.h>
using namespace std;
int solver(int num){
	int start=0;
	int end=num;
	int ans;
	while(start <= end){
		int mid=start+(end-start)/1;
		int sqare=mid*mid;
		if(sqare==num){
			ans=mid;
		}
		if(sqare <= num){
			ans=mid;
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return ans;
}
main(){
	int num=1;
	cout<<solver(num);
}