#include<bits/stdc++.h>
using namespace std;
void print_stack(stack<int> st){
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}
void insert_at_bottom(stack<int> &st,int val){
	if(st.empty()){
		st.push(val);
		return;
	}
	int top=st.top();
	st.pop();
	insert_at_bottom(st,val);
	st.push(top);
}
main(){
	stack<int> st;
	st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    print_stack(st);
    
	insert_at_bottom(st,100);
    
    print_stack(st);
}