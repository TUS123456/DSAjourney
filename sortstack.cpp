#include<bits/stdc++.h>
using namespace std;
void print_stack(stack<int> st){
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}
void insert_at_place(stack<int> &st,int val){
	if(st.empty()){
		st.push(val);
		return;
	}
	if(st.top() >= val){
		st.push(val);
		return;
	}
	int top=st.top();
	st.pop();
	insert_at_place(st,val);
	st.push(top);
}
void sort_stack(stack<int> &st){
	if(st.empty()){
		return;
	}
	int top=st.top();
	st.pop();
	sort_stack(st);
	insert_at_place(st,top);
}
main(){
	stack<int> st;
	st.push(3);
    st.push(1);
    st.push(2);
    print_stack(st);
    
    sort_stack(st);
	
    
    print_stack(st);
}