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
void solver(Node *head){
	if(head==NULL){
		return;
	}
	Node* temp=head->next;
	while(temp != NULL){
		Node *t=temp->data;
		
	}
}
int main() {

  Node* head = new Node(1);
  Node* second = new Node(2);
  Node* third = new Node(3);
  Node* fourth = new Node(3);
  Node* fifth = new Node(4);
  Node* sixth = new Node(4);
  Node* seventh=new Node(5);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth->next=seventh;
  
  
  head=solver(head);
  print(head);




  return 0;
}