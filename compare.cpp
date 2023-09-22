#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
		void solve(string &s){
		     s.erase(unique(s.begin(),s.end()),s.end());	
		}
		void print(string s){
			for(int i=0; i<s.size(); i++){
				cout<<s[i];
			}
			cout<<endl;
            }
}; 

main(){

	solution sl;
	string ans;
	string s="geeksforgeek";
	int size=s.size();
	sl.solve(s);
	sl.print(s);
	
}
