#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
	node(int d){
		this->data=d;
		this->left=this->right=NULL;
	}
	
};
node *built_tree(node *root){
	int data;
	cout<<"enter data at the root";
	cin>>data;
	root=new node(data);
	if(data== -1){
		return NULL;
	}
	cout<<"enter data for inserting in left"<<" "<<data<<endl;
	root->left=built_tree(root->left);
    cout<<"enter data for inserting in right"<<" "<<data<<endl;
	root->right=built_tree(root->right);
	return root;
}
void lavel_traversal(node *root){
	queue<node*> qu;
	qu.push(root);
	qu.push(NULL);
	while(!qu.empty()){
	    node *temp=qu.front();
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
int total_sum(node* root){
	if(root==NULL){
		return 0;
	}
	int leftsum=total_sum(root->left);
    int rightsum=total_sum(root->right);
    
    
    int rootsum=root->data+leftsum+rightsum;
    return rootsum;
}
void in_ordere_traversal(node *root){
	if(root==NULL){
		return;
	}
	in_ordere_traversal(root->left);
	cout<<root->data<<" ";
	in_ordere_traversal(root->right);
}
void pre_ordere_traversal(node *root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	pre_ordere_traversal(root->left);
	pre_ordere_traversal(root->right);
}
void post_ordere_traversal(node *root){
	if(root==NULL){
		return;
	}
	pre_ordere_traversal(root->left);
	pre_ordere_traversal(root->right);
    cout<<root->data<<" ";
}
main(){
	node *root;
	root=built_tree(root);
	//lavel_traversal(root);
	cout<<"solution : "<<total_sum(root);
}
