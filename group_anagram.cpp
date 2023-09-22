#include<bits/stdc++.h>
using namespace std;
main(){
	vector<string> str={"eat","tea","tan","ate","nat","bat"};
	sort(str.begin(),str.end());
	for(auto it : str){
		cout<<it<<" "<<endl;
    }
	for(int i=0; i<str.size()-1; i++){
		string one=str[i];
		string two=str[i+1];
		cout<<one<<" "<<two<<endl;
		/*if(check_anagram(one,two)){
			
		}*/
	}
	
	
}   