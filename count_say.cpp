#include<bits/stdc++.h>
using namespace std;
string count_say(int n){
	if(n==1){
		return "1";
	}
	if(n==2){
		return "11";
	}
	string str="11";
	for(int i=3; i<=n; i++){
		cout<<"in firstloop";
		int len = str.size();
		int count=1;
		string temp=" ";
		for(int j=1; j<=len; j++){
			if(str[j] != str[j-1]){
				cout<<"in secondloop";
				temp=temp+str[j-1];
				temp += count+'0';
				cout<<temp<<endl;
			}
			else{
				count++;
			}
		}
		str=str+temp;
	}
	
	return str;
}
main(){
	int n;
	cin>>n;
	cout<<count_say(n);
}