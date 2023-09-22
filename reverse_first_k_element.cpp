#include<bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;
void print(queue<int> dq){
	while(!dq.empty()){
		cout<<dq.front()<<" ";
		dq.pop();
	}
	cout<<endl;
}
void print(stack<int> st){
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
void reverse_k_value(queue<int> &dq,int rverse){
	int size=dq.size();
	stack<int> st;
	int count=0;
	while(!dq.empty()){
		int temp=dq.front();
		dq.pop();
		st.push(temp);
		count++;
		if(count>rverse){
			break;
		}
	}
	while(!st.empty()){
		int temp=st.top();
		st.pop();
		dq.push(temp);
	}
	count=0;
	while(!dq.empty()){
		int temp=dq.front();
		dq.pop();
		
		dq.push(temp);
		count++;
		if(count>size-rverse){
			break;
		}
	}
}
main(){
	queue<int> dq;
	dq.push(10);
	dq.push(20);
    dq.push(30);
    dq.push(40);
    dq.push(50);
    print(dq);
    int rverse=4;
    reverse_k_value(dq,rverse);
    print(dq);
}