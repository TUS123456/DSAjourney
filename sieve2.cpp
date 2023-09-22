#include<bits/stdc++.h>
using namespace std;
main(){
	int num;
	cin>>num;
	int ans=0;
	vector<bool> is_prime(num,true); 
	for(int i=2; i<num; i++){
		if(is_prime[i]){
			ans++;
			for(int j=i*i; j<num; j=i+j){
				is_prime[j]=false;
			}
		}
	}
	cout<<ans;
}