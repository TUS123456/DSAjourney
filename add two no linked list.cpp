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
void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
}
Node* reverse(Node* head){
	Node *curr=head;
	Node *prev=NULL;
	Node *nxt=NULL; 
	while(curr != NULL){
		nxt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nxt;
	}
	return prev;
}
Node* solve(Node *head1, Node *head2){
	head1=reverse(head1);
	head2=reverse(head2);
	Node* temp=head1;
	Node* temp1=head2;
	Node *ans=NULL;
	Node *ans_tail=ans;
	int carry=0;
	while(temp != NULL && temp1 != NULL){
		
		
		int sum=carry+temp->data+temp1->data;
	    int digit=sum%10;
	    carry=sum/10;
	    
		
		Node* new_node=new Node(digit);
	    
		/////////////////
		if(ans==NULL){
			ans=new_node;
			ans_tail=new_node;
		}
		else{
			ans_tail->next=new_node;
			ans_tail=new_node;
		}
	    
	    temp=temp->next;
	    temp1=temp1->next;
	}
	while(temp != NULL){
		int sum=carry+temp->data;
		int digit=sum%10;
		carry=sum/10;
		
		
		Node* new_node=new Node(digit);
		ans_tail->next=new_node;	
		ans_tail=new_node;	
		temp=temp->next;
	}
	while(temp1 != NULL){
		int sum=carry+temp1->data;
		int digit=sum%10;
		carry=sum/10;
		
		
		Node* new_node=new Node(digit);
		ans_tail->next=new_node;	
		ans_tail=new_node;	
		temp1=temp1->next;
	}
	
	while(carry){
		int digit=carry % 10;
		Node* new_node= new Node(digit);
		carry=carry/10;
		
		ans_tail->next=new_node;
		ans_tail=new_node;
	}
	ans=reverse(ans);
	return ans;
	
}
int main() {
        Node* head1 = new Node(9);
        Node* second1 = new Node(9);
        head1 -> next = second1;

        Node* head2 = new Node(9);
        Node* second2 = new Node(9);
        // Node* third2 = new Node(4);
        head2 -> next = second2;
       // second2 -> next = third2;

        Node* ans = solve(head1, head2);

        print(ans);


        return 0;
}