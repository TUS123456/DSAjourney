#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Trinode{
	public:
		char data;
		Trinode *children[26];
		bool is_terminal;
		int children_count;
		
	Trinode(char data){
		this->data=data;
		for(int i=0; i<26; i++){
			this->children[i]=NULL;
		}
		this->is_terminal=false;
		this->children_count=0;
	}
};
void insert_word(Trinode *root, string word){
		if(word.size()==0){
			root->is_terminal=true;
			return;
		}
		
		
		char ch=word[0];
		int index=ch-'a';
		Trinode *child;
		
		if(root->children[index] != NULL){
			child=root->children[index];
		}
		else{
			child=new Trinode(ch);
			root->children_count++;
			root->children[index]=child;
		}
		
		insert_word(child,word.substr(1));
}
string find_LCP(Trinode *root,string word){
	string ans="";
	cout<<word<<endl;
	for(int i=0; i < word.size(); i++){
		cout<<i<<endl;
		char ch=word[i];
		
		
		if(root->children_count==1){
			ans.push_back(ch);
			int index=ch-'a';
			root=root->children[index];
		}
		else{
			break;
		}
		if(root->is_terminal){
			break;
		}
	}
	return ans;
}
main(){
	Trinode *root=new Trinode('-');
	vector<string> input={"flower","flow","flight"};
	
	
	for(int i=0; i<input.size(); i++){
		insert_word(root,input[i]);
	}
	cout<<find_LCP(root,input[0]);
}