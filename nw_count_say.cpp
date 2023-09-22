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
		
		int len=str.size();
		
		string temp = "";
		int cnt=1;
		for(int j=1; j<=len; j++){
			if(str[j] != str[j-1]){
				temp += cnt+'0';
			    temp +=str[j-1];
			    cnt=1;
			}
			else{
				cnt++;
			}
		}
		str=temp;
	}
	return str;
}
main(){
	int n;
	cin>>n;
	cout<<count_say(n);
}