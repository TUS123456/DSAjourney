#include<bits/stdc++.h>
using namespace std;
main(){
	pair<int,int> curr;
	curr.first=0;
	curr.second=0;
	int n=0;
	while(n<4){
		string s1;
		cin>>s1;
		if(s1 =="up"){
			int num;
			cout<<"enter value for up";
		    cin>>num;
			curr.second=curr.second+num;
		}
		if(s1=="down"){
			int num;
			cout<<"enter value for down";
		    cin>>num;
			curr.second=curr.second-num;
		}
		if(s1=="left"){
			int num;
			cout<<"enter value for left";
		    cin>>num;
			curr.first=curr.first+num;
		}
		if(s1=="right"){
			int num;
			cout<<"enter value for right";
		    cin>>num;
			curr.first=curr.first-num;
		}
		n++;
	}
	cout<<sqrt((curr.first*curr.first)+(curr.second*curr.second));
}