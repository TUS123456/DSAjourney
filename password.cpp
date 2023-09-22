#include<bits/stdc++.h>
using namespace std;
void solve(int  i){
	if(i == INT_MAX){
		return;
	}
	cout<<i<<endl;
	solve(i+1);
}
main(){
	int no_digit;
	cin>>no_digit;
	for(int i=0; i<=INT_MAX; i++){
		cout<<i<<endl;
	}
}