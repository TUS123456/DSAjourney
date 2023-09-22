#include<iostream>
#include<unordered_map>
using namespace std;
main(){
	string send="aabbcdefg";
	string receive="babbcdef";
	unordered_map<char,int> str;
	for(auto ptr : send){
		//cout<<ptr<<endl;
		str[ptr]++;
	}
	for(auto ptr : receive){
		//cout<<ptr<<endl;
		str[ptr]--;
	}
	for(auto ptr : str){
		if(str[ptr] > 1){
			cout<<ptr<<endl;
		}
	}
}