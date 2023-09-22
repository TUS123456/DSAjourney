#include<bits/stdc++.h>
using namespace std;
void print_string(string &s){
	for(auto x : s){
		cout<<x<<" ";
	}
	cout<<endl;
}
bool check_anagram(string s,string t){
	bool ans=true;
	if(s.size() != t.size()){
		ans= false;
	}
	else{
		for(int i=0; i<s.size(); i++){
			if(s[i] != t[i]){
				ans= false;
			}
		}
	}
    return ans;
}
main(){
	string s = "cat";
	string t = "tar";
	print_string(s);
	print_string(t);
	sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    print_string(s);
	print_string(t);
	bool ana=check_anagram(s,t);
	cout<<ana;
}