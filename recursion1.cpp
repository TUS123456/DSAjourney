#include<bits/stdc++.h>
using namespace std;
void solve(string &str,int start){
	string curr=" ";
	if(start > str.size()){
		return;
	}
	//exclude
	solve(str,start+1);
	//include
	char ch= str[start];
	cout<<ch<<"  ";
	solve(str,start+1); 
}

main(){
	string str="ab";
	int i=0;
	solve(str,i);
}