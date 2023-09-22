#include<bits/stdc++.h>
using namespace std;
int max_sum(vector<int> &arr,int indii){
	if(indii >= arr.size()){
		return 0; 
	}
	return max(max_sum(arr,indii+1),arr[indii]+max_sum(arr,indii+2));	
}
main(){
	vector<int> arr={5, 5, 10, 100, 10, 5};
	int sum=0;
	int indii=0;
	int maxii=INT_MIN;
	cout<<max_sum(arr,indii);
}
