#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    public:
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
node* create_linked_list(node *root){
    cout<<"enter element in list";
    int data;
    cin>>data;
    node* temp=new node(data);
    if(root==NULL){
        root=temp;
    }
    node* tem=root;
    while(tem->next != NULL){
        tem=tem->next;
    }
    tem=temp; 
}
main(){
    node *root=NULL;
    root=create_linked_list(root);
}
