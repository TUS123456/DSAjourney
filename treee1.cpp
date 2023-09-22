#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *left;
	node *right;
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	} 
};
node* build_tree(int data){
	if(data==-1){
		return nullptr;
	}
	
	node *root=new node(data);
	
	int ldata;
	cout<<"insert data for left node of data"<<data<<endl;
	cin>>ldata;
	root->left=build_tree(ldata);

    int rdata;
	cout<<"insert data for right node of data"<<data<<endl;
	cin>>rdata;
	root->left=build_tree(rdata);
	
	return root;
}
main(){
	node *root;
	int data;
	cout<<"insert data for root node"<<endl;
	cin>>data;
	root=build_tree(data);
}