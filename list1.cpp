#include<iostream>
using namespace std;
class node{
	public:
		int value;
		node *next;
    node(int data){
    	this->value=data;
    	this->next=NULL;
	}
};
node* create_list(node *head){
	int i=0;
	while(i<5){
	int data;
	cout<<endl<<"enter data";
	cin>>data;
	node *temp=new node(data);
	cout<<temp->value;
	if(head==NULL){
		head=temp;
	}
	else{
		node *temp1=head;
		while(temp1->next != NULL){
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
	i++;
    } 
	return head;
}
main(){
	node *head=NULL;
	head=create_list(head);
	cout<<head->value;
}