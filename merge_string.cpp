#include<bits/stdc++.h>
using namespace std;
string solution(string &str,string &str1,string &ans,bool store,int index1,int index2){
	if(index1==str.size() && index2==str1.size()){
		return 0;
	}
	if(index1==str.size()){
		ans=ans+str1.substr(index2);
		return ans;
	}
	if(index2==str1.size()){
		ans=ans+str.substr(index1);
		return ans;
	}
	if(store==true){
		ans.push_back(str[index1]);
		index1++;
		store=false;
	}
	else{
		ans.push_back(str1[index2]);
		index2++;
		store=true;
	}
	return solution(str,str1,ans,store,index1,index2);
}
main(){
	string str="ab";
	string str1="pqrs";
	int index1=0;
	int index2=0;
	string ans;
	bool store=true;
	solution(str,str1,ans,store,index1,index2);
	cout<<ans;
}