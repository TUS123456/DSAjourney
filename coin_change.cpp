#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &coin,int target,int &count){
	//base case
	if(target == 0){
		return 1;
	}
	if(target < 0){
		return INT_MAX;
	}
	
	for(int i=0; i< coin.size(); i++){
		int x= solve(coin,target-coin[i],count);
		if(x != INT_MAX){
			count++;
			cout<<count<<" "<<endl;
		}
	}
	return count;
}
main(){
	vector<int> coin={1,2,3};
	int target=4;
	int count=0;
	count=solve(coin,target,count);
	cout<<count;
}