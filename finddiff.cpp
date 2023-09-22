#include<bits/stdc++.h>
using namespace std;
class trienode{
	public:
		char data;
		trienode *children[26];
		bool terminal;
		
	trienode(char val){
		this->data=val;
		for(int i=0; i<=26; i++){
			this->children[i]=NULL;
		}
		this->terminal=false;
	}
	
};
void insert_string(trienode *node ,string word){
		if(word.size()==0){
			node->terminal=true;
			return;
		}
		
		char ch=word[0];
		int index=ch-'a';
		trienode *child;
		
		if(node->children[index] != NULL){
			child=node->children[index];
		}
		else{
			child=new trienode(ch);
			node->children[index]=child;
		}
		insert_string(child,word.substr(1));
}
void search_string(trienode *node ,string search){
		//cout<<search<<endl;
		if(search.size()==0){
			return;
		}
		
		char ch=search[0];
		int index=ch-'a';
		trienode *child;
		
		if(node->children[index] != NULL){
			cout<<node->data;
			child=node->children[index];
		}
		else{
			cout<<node->data;
		}
		search_string(child,search.substr(1));
}
main(){
	trienode *trie;
	trie=new trienode('-');
	insert_string(trie,"abcde");
	search_string(trie,"bcde");
}