#include<bits/stdc++.h>
#include<string>
using namespace std;
void print_vector(vector<int> &ans){
	for(auto x : ans){
		cout<<x<<" ";
	}
}
main(){
	vector<int> minutes;
	vector<string> str;
	str.push_back("00:00");
	str.push_back("23:59");    //                   =["00:00","23:59","00:00"];
	str.push_back("00:00");
	for(int i=0; i< str.size(); i++){
		int hour=stoi(str[i].substr(0,2));
		int minute=stoi(str[i].substr(3,2));
		minutes.push_back((hour*60)+minute);
	}
	sort(minutes.begin(),minutes.end());
	print_vector(minutes);
}