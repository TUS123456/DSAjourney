#include<bits/stdc++.h>
using namespace std;
main(){
	string str="hello";
	string str1="hello";
	string str2;
	getline(cin,str2);
	for(auto x : str2){
		cout<<x<<" ";
	}
	cout<<str2<<endl;
	if(!str.compare(str1)){
		cout<<"match";
	}
	else{
		cout<<"no match";
	}
}