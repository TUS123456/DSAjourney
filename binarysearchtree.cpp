#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	
	public:
		int data;
		node* left;
		node* right;
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
node* insertintoBST(node* root,int data){
	if(root==NULL){
		node* root=new node(data);
		return root;
	}
	if(root->data < data)
		root->left=insertintoBST(root->left,data);
	else
	    root->right=insertintoBST(root->right,data);
	return root;
}
void level_order_traversal(node* root){
	queue<node*> qu;
	qu.push(root);
	qu.push(NULL);
	while(!qu.empty()){
		node *temp;
		temp=qu.front();
		qu.pop();
		if(temp==NULL){
			cout<<endl;
		if(!qu.empty()){
			qu.push(NULL);
		   }
	    }
	    else{
	    	cout<<temp->data<<" ";
	    	if(temp->left){
	    		qu.push(temp->left);
			}
			if(temp->right){
	    		qu.push(temp->right);
			}
		}
    }
}
void* take_input_AND_make_tree(node* &root){
	int data;
	cin>>data;
	while(data != -1){
		insertintoBST(root,data);
		cin>>data;
	}
}
main(){
	node*root=NULL;
	cout<<"enter data in binary search tree";
	take_input_AND_make_tree(root);
	
	
	level_order_traversal(root);
}
