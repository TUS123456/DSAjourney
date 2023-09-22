#include<bits/stdc++.h>
using namespace std;
void print_stack(stack<char> stack){
	while(!stack.empty()){
		cout<<stack.top();
		stack.pop();
	}
}
int findMaxLen(string s,int count,stack<char> &stack) {
        for(int i=0; i<s.size(); i++){
        	if(s[i]=='('){
        		cout<<s[i]<<" ";
        		stack.push(s[i]);
			}
			if(!stack.empty()){
			    if(s[i]==')'){
				    count++;
				}
			}
		}
		
    }
    
main(){
	stack<char> stack;
	int count=0;
	string s="()()()";
	findMaxLen(s,count,stack);
	print_stack(stack);
	cout<<count;
}
