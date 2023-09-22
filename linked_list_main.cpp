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
main(){
	controller();
    print_val(head);
}