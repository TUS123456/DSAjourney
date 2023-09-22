#include<iostream>
#include<iostream>
#include<vector>
using namespace std;
class trieNode{
	public:
	char data;
	trieNode* children[26];
	bool is_terminal;
	
	
	trieNode(char data){
		this->data=data;
		for(int i=0; i<=26; i++){
			this->children[i]=NULL;
		}
		this->is_terminal=false;
	}	
};
void insertWord(trieNode *root,string str){
	cout<<str<<endl;
	if(str.length()==0){
		root->is_terminal=true;
		return;
	}
	char ch=str[0];
	int index=ch-'a';
	cout<<index<<endl;
	trieNode*child;
	
	if(root->children[index] != NULL){
		child=root->children[index];
	}
	else{
		child=new trieNode(ch);
		root->children[index]=child;
	}
	insertWord(child,str.substr(1));
}
char search_word(trieNode *root,string receive){
	if(root->is_terminal){
		return root->data;
	}
	
	char ch=receive[0];
	int index=ch-'a';
	cout<<index<<endl;
	trieNode *child;
	
	if(root->children[index] != NULL){
		child=root->children[index];
	}
	else{
		return root->data;
	}
	search_word(child,receive.substr(1));
}

main(){
	string send="aabbcdefg";
	string receive="abbcdef";
	
	trieNode *root=new trieNode('-');
	insertWord(root,send);
	cout<<search_word(root,receive);
}