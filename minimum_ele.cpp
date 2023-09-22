#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={0,9,10,12,13,99};
	int min=INT_MAX;
	int indii=0;
	for(int i=0; i< arr.size(); i++){
		if(arr[i] < min){
			min=arr[i];
		}
	}
	//solve(arr,indii,min);
	cout<<min;
	int max=INT_MIN;
	for(int i=0; i< arr.size(); i++){
		if(arr[i] > max){
			max=arr[i];
		}
	}
	cout<<endl<<max;
}