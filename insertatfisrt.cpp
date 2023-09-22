#include<bits/stdc++.h>
using namespace std;
void print(stack<int> stk){
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}
	cout<<endl;
}
void insert_at_first(stack<int> &stk,int val){
	if(stk.empty()){
		stk.push(val);
		return;
	}
	int temp=stk.top();
	stk.pop();
	insert_at_first(stk,val);
	stk.push(temp);
}
main(){
	stack<int> stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	stk.push(50);
	print(stk);
	insert_at_first(stk,100);
	print(stk);
}