#include<bits/stdc++.h>
using namespace std;
bool solution(string &s,string &p,int si,int pi){
	if(si==s.size() || pi==p.size()){
		return true;
	}
	if(si==s.size() || pi < p.size()){
		while(pi != p.size()){
			if(p[pi] != '*'){
				return false;
			}
			pi++;
		}
		return true;
	}
	if(s[si]==p[pi] || p[pi]=='?'){
		return solution(s,p,si++,pi++);
	}
	if(p[pi]=='*'){
		bool caseA=solution(s,p,si,pi++);
		bool caseB=solution(s,p,si++,pi);
	    return caseA || caseB;
	}
	
	return false;
}
main(){
	string s="abcdefg";
	string p="ab*fg";
	int si=0;
	int pi=0;
	cout<<solution(s,p,si,pi);
}