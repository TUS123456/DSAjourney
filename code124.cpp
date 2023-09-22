#include<iostream>
using namespace std;
class Node{
	int val;
	Node* left;
	Node* right;
	Node(int data){
		this->val=data;
		this->left=this->right=NULL;
	}
};
Node* mapping_nodeToparent(Node* root,int target,map<Node*,Node*> &map){
	Node* res=NULL;
	if(root==NULL){
		return NULL;
	}
	queue<Node*> que;
	que.push(root);
	map[root]=NULL;
	while(!que.empty()){
		Node* que_fr_node=que.front();
		que.pop();
		if(que_fr_node->val==target){
			res=que_fr_node;
		}
		if(que_fr_node->left){
			map[que_fr_node->left]=que_fr_node;
			que.push(que_fr_node->left);
		}
		if(que_fr_node->right){
			map[que_fr_node->right]=que_fr_node;
		    que.push(que_fr_node->right);
		}
	}
   return res;
}
int burn_tree(Node* root,map){
	if(root==NULL){
		return NULL;
	}
	map<Node*,bool> visited;
	queue<Node*> que;
	que.push(root);
	visited[root]=true;
	int time=0;
	while(!que.empty()){
		int flag=0;
		int size=que.size();
		for(int i=0;i<size; i++){
			
			Node* front_node=que.front();
			que.pop();
			if(front_node->left && !visited[front->left]){
				flag=1;
				que.push(front_node->left);
				visited[front->left]=true;
			}
			if(front_node->right && !visited[front->right]){
				flag=1;
				que.push(front_node->right);
				visited[front->left]=true;
			}
			if(map[front_node]&& !visited[map[front_node]]){
				flag=1;
				que.push(map[front_node]);
				visited[map[front_node]]=true;
			}
		}
		if(flag==1){
			time++;
		}
	}
    return time;
}
main(){
	Node* root=buit_tree(root);
	int target=10;
	map<Node*,Node*> map;
	Node* ans=mapping_nodeToparent(root,target,map);
}
