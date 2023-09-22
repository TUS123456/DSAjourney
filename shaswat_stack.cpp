#include<iostream>
using namespace std;
class stack{
	public:
	int arr[10001];
	int top;
	int size;
	stack(int size){
		this->top=-1;
	    this->size=size;
    }
		void push(int ele){
			top=top+1;
			if(top < size){
				arr[top]=ele;
			}
		}
		int pop(){
			int temp;
			if(top > -1){
				temp=arr[top];
				top=top-1;
			}
			return temp;
		}
	
};
main(){
	stack stk(3);
	stk.push(67);
	stk.push(87);
	stk.push(90);
	cout<<stk.pop()<<endl;
	cout<<stk.pop()<<endl;
}