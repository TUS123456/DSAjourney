#include<iostream>
#include<queue>
#include<stack>
#include<unordered_map>
using namespace std;
main(){
	unordered_map<int,stack<int>> que;
	stack<int> stk;
	int num;
	cin>>num;
	while(num--){
		int val;
		cin>>val;
		stk.push(val);
	}
	int i=0;
	que[i++].push_back(stk);
	
	
}