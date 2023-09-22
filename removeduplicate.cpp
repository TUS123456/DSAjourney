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
void removeDuplicates(Node* head) {
        if( head == NULL) {
                cout << "LL is empty" << endl;
                return;
        }
        if(head -> next == NULL) {
                cout << "Single Node in LL" << endl;
                return ;
        }

        Node* curr = head;

        while(curr != NULL) {
                if((curr -> next != NULL) && (curr -> data == curr -> next -> data) ) {
                        Node* temp = curr -> next;
                        curr -> next = curr -> next -> next;
                        temp -> next = NULL;
                        delete temp;
                }
                else {
                        // not equal
                        curr = curr -> next;
                }
        }


}
Node* solver(Node *head){
		if(head==NULL){
           return NULL;
        }
        if(head->next){
        	return head;
		}
		int val=head->data;
		Node* temp=head->next;
		
		
		if(temp->data != val){
			head->next=solver(temp);
			return head;
		}
		else{
			while(temp && temp->data== val){
				temp=temp->next;
			}
			return solver(temp);
		}
		return head;
}
void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
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