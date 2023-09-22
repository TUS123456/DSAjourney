#include<bits/stdc++.h>
using namespace std;
main(){
	string s="23";
	string st="3";
	int num=0;
	int num1=0;
	for(int i=0; i<s.size(); i++){
		int digit=s[i]-'0';
		num=(num*10) + digit;
	}
	cout<<num;
	for(int i=0; i<st.size(); i++){
		int digit=st[i]-'0';
		num1=(num1*10) + digit;
	}
	cout<<endl<<num1;
	
	long long num3=num*num1;
	cout<<endl<<num3;
	
}