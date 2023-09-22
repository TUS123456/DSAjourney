#include<bits/stdc++.h>
using namespace std;
void print_array(bool *is_prime,int num){
	for(int i=0; i<=num; i++){
		cout<<is_prime[i]<<" ";
	}
}
main(){
	int num;
	cin>>num;
	bool is_prime[num];
    for(int i=1; i<=num; i++){
    	is_prime[i]=true;
	}
	is_prime[0]=0;
	is_prime[1]=0;
	print_array(is_prime,num);
	
	
}