#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &price,int indii,int min_price,int max_profit){
	if(indii > price.size()-1){
		return max_profit;
	}
	cout<<indii<<endl;
	if(min_price > price[indii]){
		min_price=price[indii];
	}
	if(price[indii]-min_price > max_profit){
		max_profit=price[indii]-min_price;
	}
	solve(price,++indii,min_price,max_profit);
}
main(){
	vector<int> price={7,1,5,3,6,4};
	int min_price=INT_MAX;
	int max_profit=INT_MIN;
	int indii=0;
	cout<<endl<<solve(price,indii,min_price,max_profit);
    
}