#include<bits/stdc++.h>
using namespace std;
class Node{
        public:
        int data;
        Node* next;

        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
};
void print(Node* &head) {
        Node* temp = head;
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
}
Node* sort(Node* &head){
	if(head==NULL){
		cout<<"list is empty"<<endl;
	}
	
	Node* zero_head= new Node(-1);
	Node* zero_tail=zero_head;

    Node* one_head= new Node(-1);
	Node* one_tail=one_head;
	
	Node* two_head= new Node(-1);
	Node* two_tail=two_head;
	
	Node* temp=head;
	while(temp != NULL){
		if(temp->data==0){
			Node* temp1=temp;
			temp=temp->next;
			temp1->next=NULL;
			zero_tail->next=temp1;
			zero_tail=temp1;
			
		}
		else if(temp->data==1){
			Node* temp1=temp;
			temp=temp->next;
			temp1->next=NULL;
			one_tail->next=temp1;
			one_tail=temp1;
		}
		else if(temp->data==2){
			Node* temp1=temp;
			temp=temp->next;
			temp1->next=NULL;
			two_tail->next=temp1;
			two_tail=temp1;
		}
	}
	Node*temp1=one_head;
	one_head=one_head->next;
	temp1->next=NULL;
	delete temp1;
	
	temp1=two_head;
	two_head=two_head->next;
	temp1->next=NULL;
	delete temp1;
	
	if(one_head != NULL){
		zero_tail->next=one_head;
		if(two_head!= NULL){
			one_tail->next=two_head;
		}
	}
	else{
		if(two_head != NULL){
			zero_tail->next=two_head;
		}
	}
	
	return zero_head->next;
}
main(){
    Node* head = new Node(2);
    Node* second = new Node(2);
    Node* third = new Node(1);
    Node* fourth = new Node(1);
    Node* fifth = new Node(0);
    Node* sixth = new Node(0);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    
    print(head);
    Node * ans=sort(head);
    print(ans);
}