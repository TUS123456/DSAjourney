#include<bits/stdc++.h>
using namespace std;
vector<pair<int,string>> mp={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
void solve(int num,string &a){
	if(num==0){
		return;
	}
	for(auto it : mp){
		if(num >= it.first){
			a=a+it.second;
			num=num-it.first;
			return solve(num,a);
		}
		 
	}
}
main(){
	int num;
	cin>>num;
	string a;
	solve(num,a);
	cout<<a;
}