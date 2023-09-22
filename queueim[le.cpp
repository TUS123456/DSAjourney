#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
class queue{
	public:
		int *arr;
		int front;
		int rear;
		int size;
	queue(int size){
	   this->size=size;
	   arr=new int[size];
	   this->front=0;
	   this->rear=-1;
	}
	void push_ele(int element){
		if(rear==size){
			cout<<"queue is full";
		}
		else{
		rear++;
		arr[rear]=element;
	    }
    }
    int pop_ele(){
		if(rear==front){
    		cout<<"queue is empty";
		}
		else{
     		return arr[front];
     		front++;
		}
	}
	
};
main(){
    queue qu;
    qu.push_ele(3);

}
