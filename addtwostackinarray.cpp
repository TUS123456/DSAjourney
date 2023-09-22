#include<bits/stdc++.h>
using namespace std;
class Stack{
	private:
		int *arr;
		int size=0;
		int top1=0;
		int top2=0;
	public:
		Stack(int size){
			this->size=size;
			arr=new int[size];
			top1=-1;
			top2=size;
		}
		void push1(int data){
			if(top2-top1 == 1){
				cout<<"overflow in stack 1"<<endl;
			}
			else{
				top1++;
				arr[top1]=data;
			}
		}
		void pop1(){
			if(top1==-1){
				cout<<"underflow in stack 1"<<endl;
			}
			else{
				arr[top1]=0;
				top1--;
			}
		}
		void push2(int data){
			if(top2-top1 == 1){
				cout<<"overflow in stack 2"<<endl;
			}
			else{
				top2--;
				arr[top2]=data;
			}
		}
		void pop2(){
			if(top2==size){
				cout<<"underflow stack in 2"<<endl;
			}
			else{
				arr[top2]=0;
				top2++;
			}
		}
		void print(){
			cout<<endl;
			cout<<"top1 :" <<top1<<endl;
			cout<<"top2 :" <<top2<<endl;
			for(int i=0; i<size; i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};
main(){
	Stack s(10);
	
	
	s.push1(10);
        s.print();
        s.push1(20);
        s.print();
        s.push1(30);
        s.print();
        s.push1(40);
        s.print();
        s.push1(50);
        s.print();

        s.push2(100);
        s.print();
        s.push2(110);
        s.print();
        s.push2(120);
        s.print();
         s.push2(130);
        s.print();
        s.push2(140);
        s.print();
        
        s.pop1();
        s.print();
        s.pop1();
        s.print();

s.pop1();
        s.print();

s.pop1();
        s.print();

        s.pop1();
        s.print();

        s.push2(1000);
        s.print();

        s.pop1();
        s.print();
  return 0;
}