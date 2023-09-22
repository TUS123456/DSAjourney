#include<iostream>
#include<vector>
using namespace std;
class TrieNode{
	public:
	char data;
	TrieNode *children[26];
	bool is_terminal;
	TrieNode(char data){
		this->data=data;
		this->is_terminal=false;
		for(int i=0; i<26; i++){
			this->children[i]=NULL;
		}
	}		
};
void insert_string(TrieNode *root, string word){
	if(word.length()==0){
		root->is_terminal=true;
		return;
	}
	
	
	char ch=word[0];
	int index=ch-'a';
	
	TrieNode *child;
	
	if(root->children[index] != NULL){
		child=root->children[index];
	}
	else{
		child=new TrieNode(ch);
		root->children[index]=child;
	}
	insert_string(child,word.substr(1));
}
void store_sugesstion(TrieNode* root,vector<string> &temp,string &prefix){
	if(root->is_terminal){
		temp.push_back(prefix);
	}
	for(char ch='a'; ch <= 'z'; ch++){
		int index=ch-'a';
		TrieNode* next=root->children[index];
		
		if(next != NULL){
			prefix.push_back(ch);
			store_sugesstion(next,temp,prefix);
			prefix.pop_back();
		}
	}
}
vector<vector<string>> get_string(TrieNode*root,string word){
	vector<vector<string>> ans;
	string prefix;

	TrieNode *prev=root;
	TrieNode *curr;
	
	for(int i=0; i<=word.length(); i++){
		char ch = word[i];
		int index = ch-'a';
		
	curr=prev->children[index];
	if(curr==NULL){
		break;
	}
	else{
		vector<string> temp;
		prefix.push_back(ch);
		store_sugesstion(curr,temp,prefix);
		ans.push_back(temp);
		prev=curr;
	    }
	}
	
	return ans;
}
main(){
	vector<string> str;
	str.push_back("love");
	str.push_back("lover");
	str.push_back("loving");
	str.push_back("lane");
	str.push_back("least");
	str.push_back("lost");
	str.push_back("lord");
	
	
	TrieNode *root=new TrieNode('-');
	for(int i=0; i < str.size(); i++){
		insert_string(root,str[i]);
	}
	
	vector<vector<string>> output;
	string word="lovi";
	output=get_string(root,word);
	
	for(int i=0; i< output.size(); i++){
		for(int j=0; j< output[i].size(); j++){
			cout<<output[i][j]<<",";
		}
		cout<<endl;
	}
}