#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next=NULL;
    //condtructor
	node(int data){
    	this->data=data;
    	this->next=NULL;
	}
};
    void insert_at_head(node* &head,int newdata){
		node* temp=new node(newdata);
		if(head==NULL){
			head=temp;
		}
		else{
		temp->next=head;
		head=temp;
	    }
    }
    void print_list(node* &head){
    	node* temp=head;
    	while(temp != NULL){
    		cout<<temp->data<<" ";
    		temp=temp->next;
		}
    }
    void insert_at_tail(node* &head,int newdata){
    	node* temp=new node(newdata);
		node* temp1=head;
		if(head==NULL){
			head= temp;
		}
    	while(temp1->next != NULL){
    		temp1=temp1->next;
		}
		temp1->next=temp;
	}
main(){
	int x;
	node *head;
	cout<<endl<<"enter new data";
	insert_at_head(head,10);
	print_list(head);
	insert_at_tail(head,20);
	print_list(head);
}
