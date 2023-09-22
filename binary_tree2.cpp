#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    
	
	node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
	}
};
node* built_tree(node* root){
	cout<<"enter data at root";
	int data;
	cin>>data;
	root=new node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"enter data for insert in left of"<<" "<<data<<endl;
	root->left=built_tree(root->left);

    cout<<"enter data for insert in right of"<<" "<<data<<endl;
	root->right=built_tree(root->right);
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
int main(){
	node* root=NULL;
	root=built_tree(root);
	level_order_traversal(root);
    return 0;
}
