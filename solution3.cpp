#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int i=0,a;
	int sum=0;
	a=(i*i*i);
	while(i < 100){
		sum=sum+a;
		i=i+1;
		a=(i*i*i);
		
	}
	cout<<sum;
	
	
}