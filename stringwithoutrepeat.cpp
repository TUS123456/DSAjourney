#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void print_map(map<char,int> map){
		for(int i=0; i<	map.size(); i++){
			cout<<map[i]<<" ";
		}
	}
    vector<char> lengthOfLongestSubstring(string &s) {
        vector<char> ans;
        for(int i=0; i<s.size(); i++){
        	ans.push_back(s[i]);
		}
		return ans;
    }
    void solve(vector<char> ans){
    	ans.erase(unique(ans.begin(),ans.end()),ans.end());
	    cout<<ans.size(); 
	}
    void print_string(string &s){
        for(int i=0; i<s.size(); i++){
        	cout<<s[i];		
		}
		cout<<endl;
	}
	void print_string(vector<char> &s){
        for(int i=0; i<s.size(); i++){
        	cout<<s[i];		
		}
		cout<<endl;
	}
	
};
main(){
	Solution s1;
	vector<char>  ans;
	string s ="abcabcbb";
	ans=s1.lengthOfLongestSubstring(s);
    s1.print_string(ans);
	s1.print_string(s);
    s1.solve(ans);
}
