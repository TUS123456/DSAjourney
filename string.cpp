#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:		
	int lps(string s) {
	    int n=s.size(),ans;
	    string pre="";
	    string suff="";
	    for(int i=0; i<n-1; i++){
	    	pre = pre+ s[i];
	    	cout<<pre<<endl;
	    	suff = suff+s[n-i-1];
	    	cout<<suff<<endl;
			if(pre==suff){
	    		cout<<pre;
	    		cout<<suff;
	    		ans=pre.size();
			}
		}
		cout<<ans;
	}
	void print_prefix(string &s){
		for(int i=0; i<s.size(); i++){
			cout<<s[i]<<" ";
		}
	}
	/*void prefix_sum(string &s,string &pre){
		map<char ,bool> mapp;
		for(int i=0; i<s.size(); i++){
			char temp=s[i];
			if()
		}
	}*/
	void print_all_prefix(string &s){
		cout<<endl;
		int n=s.size();
		for(int i=0; i<n-1; i++){
			for(int j=0;j<=i; j++){
				cout<<s[j];
			}
			cout<<endl;
		}
	}
	void longestUniqueSubsttr(string S){
        vector<char> ans;
        int i;
        cout<<S.size();
        for(i=0; i<S.size(); i++){
            char temp =S[i];
			ans.push_back(temp);
        }
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        cout<<ans.size();
    }
};
main(){
	Solution stk;
	string s="abab";
	stk.longestUniqueSubsttr(s);
}
