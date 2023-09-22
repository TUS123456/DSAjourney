#include<bits/stdc++.h>
#include<stack>
using namespace std;
void print_stack(stack<char> st){
	for(int i=0; i<st.size(); i++){
		cout<<st.top();
		st.pop();
		cout<<endl;
	}
}
bool is_palindrome(string st){
	int len=st.size();
	cout<<len<<endl;
	stack<char> stk;
	int i;
	for(i=0; i<len/2; i++){
		stk.push(st[i]);
		cout<<stk.top();
	} 
	if(len%2 != 0){
		i++;
	}
	while(st[i] != '\0'){
		if(st[i]==stk.top()){
			cout<<stk.top()<<endl;
			stk.pop();
		}
		i++;
	}
	if(stk.size()==0){
		return 1;
	}
	else{
		return 0;
	}
}
main(){
	string st="madam";
	bool num=is_palindrome(st);
	cout<<endl<<num;
}