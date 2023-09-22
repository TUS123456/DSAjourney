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

bool search_word(trieNode* root,string word){
	if(word.length()==0){
		return root->is_terminal;
	}
	
	char ch =word[0];
	int index=ch-'a';
	trieNode* child;
	
	if(root->children[index] != NULL){
		child=root->children[index];
	}
	else{
		return false;
	}
	search_word(child,word.substr(1));
}

main(){
	trieNode *root=new trieNode('-');
	insertWord(root, "coding");
    insertWord(root, "code");
    insertWord(root, "coder");
    insertWord(root, "codehelp");
    
    vector<string> str;
	str.push_back("love");
	str.push_back("lover");
	str.push_back("loving");
	str.push_back("lane");
	str.push_back("least");
	str.push_back("lost");
	str.push_back("lord");
    /*cout<<"now perform search....."<<endl;
    
    if(search_word(root,"code")){
    	cout<<"present"<<endl;
	}
	else{
		cout<<"not preset"<<endl;
	}*/
	for(int i=0; i<str.size(); i++){
		insertWord(root,str[i]);
	}
}