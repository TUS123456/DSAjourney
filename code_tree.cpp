#include<iostream>
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
node* built_tree(node *root){
	int data;
	cout<<"enter root data";
	cin>>data;
	root=new node(data);
	
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter data for inserting in left of"<<" "<<data<<endl;
	root->left=built_tree(root->left);

    cout<<"enter data for inserting in left of"<<" "<<data<<endl;
	root->right=built_tree(root->right);
  
  
    return root;
}
main(){
	node *root=NULL;
	built_tree(root);
}
