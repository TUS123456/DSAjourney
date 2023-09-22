#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *nxt=NULL;
    node(int data){
    	this->data=data;
    	this->nxt=NULL;
	}
};
node *head=NULL;
node* insert_node(node *head){
	int val;
	cout<<"insert value";
	cin>>val;
	node *temp=new node(val);
	if(head==NULL){
		head=temp;
	}
	else{
		node *temp2=head;
		while(temp2->nxt != NULL){
			temp2=temp2->nxt;
		}
		temp2->nxt=temp;
	}
	return head;
}
void print_val(node *head){
	if(head==NULL){
		return;
	}
	print_val(head->nxt);
	cout<<head->data<<endl;
}
void controller(){
	int count,i=0;
	cout<<"how many you want insert"<<endl;
	cin>>count;
	while(i <= count){
		head=insert_node(head);
		i++;
	}
}
void detecte_cycle(node *cycle_list){
	node *temp=cycle_list;
	unordered_map<int,bool> visited;
	while(temp->nxt != NULL){
		if(visited[temp->data]==1){
			break;
		}
		visited[temp->data]=1;
		temp=temp->nxt;
	}
	cout<<endl<<temp->data<<endl;
    cout<<endl<<head->data<<endl;
}
node* create_cyle(){
	if(head ==NULL){
		return NULL;
	}
	node *temp=head;
	while(temp->nxt != NULL){
		temp=temp->nxt;
	} 
	temp->nxt=head;
	return head;
}
main(){
	controller();
    print_val(head);
    node* cycle_list=create_cyle();
    cout<<head<<endl;
    cout<<cycle_list<<endl;
    detecte_cycle(cycle_list);
}