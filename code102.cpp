#include<iostream>
using namespace std;
class node{
   public:
   int data;
   node* prev=NULL;
   node* next=NULL;

   //create constructor
   node(int item){
    this->data=item;
    this->next=NULL;
    this->prev=NULL;
   }
};
node* create_node(int item){
	node* temp=new node(item);
    return(temp);
}
void insert_node(node* &head,node* temp){
	//cout<<"insert";
	if(head==NULL){
		head=temp;
		//temp=head;
	}
	else{
		cout<<"insert k else m";
		node* temp1=head;
		while(temp1->next != NULL){
			temp1=temp1->next;
		}
        temp1->next=temp;
	}
}
void printnode(node* &head){
	node* temp=head;
		while(temp != NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
	}
}

int main(){
	node* head=NULL;
	node* temp;
	for(int i=0; i<5; i++){
    int n;
	cout<<"enter data";
    cin>>n;
	
	printnode(head);
	return 0;
}
