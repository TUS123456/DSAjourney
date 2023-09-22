#include<iostream>
using namespace std;
class node{
   public:
   int data;
   node *next=NULL;
   node *prev=NULL;
   node(int item){
   this->data=item;
   this->next=this->prev=NULL;
   }
};
void print_list(node* head){
	cout<<"hill";
	node* temp=head;
	if(temp==NULL)
	{
		cout<<"nhi h node"<<endl;
	}
	if(temp!= NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void insert_node(node* &head,int item){
	node* temp=head;
	node *temp1=new node(item);
	//node* temp=head;
	if(head==NULL){
		temp1->prev=NULL;
		head=temp1;
	}
	while(temp != NULL){
		cout<<temp->data;
		temp=temp->next;
	    cout<<"at while";
	}
	temp->next=temp1;
	temp1->prev=temp;
	print_list(head);
}
main(){
    node* head=NULL;
    //print_list(head);
	node* node1=new node(1);
	node *tail=node1;
	head=node1;
    //print_list(head);
    //node* node2=new node(40);
    insert_node(head,40);
    //print_list(head);
}
