#include<bits/stdc++.h>
using namespace std;
main(){
	map<char,bool> marked;
	//memset(marked,false,sizeof(marked));
	map<char,char> maped;
	string str="aax";
	string str1="bby";
	if(str.size()!= str1.size()){
		cout<<"no isomorphic";
	}
	else{
		for(int i=0;i<str.size(); i++){
			if(!maped[str[i]]){
				if(!marked[str1[i]])
					cout<<"no";
				maped[str[i]]=str1[i];
			    marked[str1[i]]=true;
			}
			else if(maped[str[i]]!= str1[i]){
	
			}
		}
	}
	cout<<"yes";
}