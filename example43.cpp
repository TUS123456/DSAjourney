#include<iostream>
using namespace std;
struct node{
	int data;
	int *right;
	int *left;
};
node *start=NULL;
node *create_node(){
        int temp;
        temp=(struct node*)malloc(struct node);
        return temp;
}
