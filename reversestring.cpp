#include<bits/stdc++.h>
using namespace std;
void print_stk(stack<char> stk){
	while(!stk.empty()){
		cout<<stk.top()<<endl;
		stk.pop();
	}
}
main(){
	string str="3[a]2[bc]";
	int start=0;
	stack<char> stk;
	string mainstr;
	string currstr;
	for(auto x : str){
		if(x != '[' && x !=']'){n
		stk.push(x);
	    }
    }
	print_stk(stk);
	
}