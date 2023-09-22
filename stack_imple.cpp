#include<bits/stdc++.h>
using namespace std;
class stck{
	public:
		int arr[1001];
		int size;
		int top;
	
	stck(int size){
		this->size=size;
		this->top=-1;
	}
	
	void push(int data){
		top=top+1;
		if(top <= size){
			arr[top]=data;
		}
	}
	int pop(){
		int temp=0;
		if(top > -1){
			temp=arr[top];
			top=top-1;
		}
		return temp;
	}
	
	
};
int main(){
	stck stk(6);
    stk.push(56);
    stk.push(68);
    stk.push(90);
    stk.push(34);
    cout<<"pop element"<<endl;
    cout<<stk.pop();
    cout<<stk.pop();
}