#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	int *next;
	int *prev;
};
node create_node(){
	node *temp;
	temp=(node*)malloc(sizeof(node));
    return *temp;
}
void print_node(node *node){
	cout<<node->data<<endl;
}
main(){
	node temp,temp1;
	temp=create_node();
	temp.data=10;
    print_node(&temp);
    temp1.data=12;
    print_node(&temp1);
	//cout<<sizeof(temp1);
}

