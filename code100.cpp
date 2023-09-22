#include<iostream>
using namespace std;
class node{
	public:
		int data=0;
		node *next=NULL;
    node(int data){
        this->data=data;
        this->next=NULL;
    }*/
};
main(){
	node *node1=new node(50);
	cout << node1->data;
	cout <<endl<< node1->next;
}