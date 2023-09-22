#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
main(){
	int num=12345;
	int pow=34567;
	int n=0;
	double sum=0;
	double digit=num%10;
	cout<<digit<<endl;
	while(n<2){
		double i=0;
		int digit=pow%10;
		int nums=pow(10,i);
	    sum=sum+(nums+digit);
		pow=pow/10;
		i++;
		n++;
	}
	cout<<sum<<endl;
	
}
