#include<iostream>
using namespace std; 
int max_in_subarray(int *arr){    
	long long mn=1;
	long long mx=1;
	long long ans=INT_MIN;
	for(int i=0; i<5; i++){
		if(arr[i]<0){
			swap(mn,mx);
	    }
		
		long long num = (long long )arr[i];
		cout<<num<<endl;
		
		
		mx=max(num,mx*num);
		mn=min(num,mn*num);
		cout<<mn<<" "<<mx<<endl;
		
		ans=max(ans,max(mx,mn));
	}
    return ans;
}
	
main(){
	int arr[]={6,-3,-10,0,2};
	cout<<max_in_subarray(arr);
}
