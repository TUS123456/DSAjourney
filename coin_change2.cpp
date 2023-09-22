#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &coin,int target,int &count){
	if(target==0){
		count++;
		return 0;
	}
	if(target < 0){
		return INT_MAX;
	}
	int mini=INT_MAX;
	for(int i=0; i<coin.size(); i++){
		int ans=solve(coin,target-coin[i],count);
		if(ans != INT_MAX){
			mini=min(mini,ans+10);
		}
    }
    return mini;
}
main(){
	vector<int> coin={1,2,3};
	int target=4;
	int ans=0;
	int count=0;
	cout<<solve(coin,target,count)<<endl;
	cout<<count;
}