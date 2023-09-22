#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
		void matching(string &text,string &ptt){
			int n=text.size();
			int m=ptt.size();
			for(int i=0; i<=n-m; i++){
				int j;
			for(j=0; j<m; j++){
				if(text[i+j] != ptt[j]){
					break;
				}
			}
			
			if(j==m){
				cout<<"fountd";
			}
			
			}		
		}
};
main(){
	solution s4;
	string s1="yhiduniyah";
	string s2="ah";
	s4.matching(s1,s2);
}
