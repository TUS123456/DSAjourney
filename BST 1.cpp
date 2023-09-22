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
node* search_elemenent(node *root,int target){
	if(root==NULL){
		return NULL;
	}
	if(root->data==target){
		return root;
	}
	if(root->data > target){
		return search_elemenent(root->left,target);
	}
	else{
		return search_elemenent(root->right,target);
	}
}
node* create_BST(node *root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	
	if(root->data > data){
		root->left=create_BST(root->left,data);
	}
	else{
		root->right=create_BST(root->right,data);
	
	}
	return root;
}
node* take_input(node *root){
	int data;
	cin>>data;
	
	while(data != -1){
		root=create_BST(root,data);
	    cin>>data;
	}
	return root;
}
void inorder_traversal(node *root){
	if(root==nullptr) return;
	
	inorder_traversal(root->left);
	cout<<" "<<root->data;
	inorder_traversal(root->right);
}
int mini_elee(node *root){
	if(root==NULL){
		return 0;
	}
	
	while(root->left){
		root=root->left;
	}
	return root->data;
}
int maxii_ele(node *root){
	if(root==NULL){
		return 0;
	}
	while(root->right){
		root=root->right;
	}
	return root->data;
}
int in_order_predeccessor(node* root){
	if(root==NULL){
		return 0;
	}
	
	node *curr=root->left;
	while(curr->right){
		curr=curr->right;
	}
	
	return curr->data;
}
int in_order_successor(node* root){
	if(root==NULL){
		return 0;
	}
	
	node *curr=root->right;
	while(curr->left){
		curr=curr->left;
	}
	
	return curr->data;
}
node* deletion_node(node *root,int target){
	if(root==NULL) return root;
	
	
	auto target_node=search_elemenent(root,target);
	// if node is leaf node
	cout<<target_node->data<<" ";
	
	
	return root;
	
}
main(){
	node *root=NULL;
	root=take_input(root);
	//inorder_traversal(root);
	level_order_traversal(root);
	cout<<"found or not "<<" "<<search_elemenent(root,1)<<endl;
    cout<<"minimum element"<<mini_elee(root)<<endl;
    cout<<"maximum element"<<maxii_ele(root)<<endl;	
	cout<<"inorder predeccessor "<<" "<<in_order_predeccessor(root)<<endl;
	cout<<"inorder successor "<<" "<<in_order_successor(root)<<endl;
	cout<<"deletion process start"<<endl;
	root=deletion_node(root,20);
	return 0;
}

//10
//20
//5
//11
//17
//2
//4
//8
//6
//25
//15
//-1