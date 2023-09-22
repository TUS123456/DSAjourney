#include<bits/stdc++.h>
using namespace std;
int main(){
	int nums[]={1,1,1,1,1};
	int size=sizeof(nums)/sizeof(nums[0]);
	cout<<size<<endl;
	int temp=0;
	for(int i=0; i<=size; i++){
		temp=temp+nums[i];
		nums[i]=temp;
	}
	for(int i=0; i<size; i++){
		cout<<nums[i]<<" ";
	}
return 0;
}
