#include<iostream>
using namespace std;
void sieve_of_prime(int &n){
	int prime[100]={0};
	
	for(int i=2; i<=n; i++){
		if(prime[i]==0){
			for(int j=i*i; j<=n; j+=i){
				prime[j]=1;
			}
		}
	}
	for(int i=2; i<=n;  i++){
		if(prime[i]==0){
			cout<<i<<" ";
		}
	}
}
main(){
	int n;
	cin>>n;
	
	sieve_of_prime(n);
}