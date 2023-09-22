#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *nxt;
    public:
    node(int d){
        this->data=d;
        this->nxt=NULL;
    }
};
node* temp=NULL;
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
	cout<<head->data<<endl;
	print_val(head->nxt);
	
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
void reverse_list(node* head){
	if(head==NULL){
		return;
	}
	reverse_list(head->nxt);
	swap(head->data,temp->data);
	temp=temp->nxt;
	
}
main(){ 
	controller();
    print_val(head);
    temp=head;
	cout<<endl<<temp;
    reverse_list(head);
    cout<<"reverse list";
    print_val(head);
    
}
