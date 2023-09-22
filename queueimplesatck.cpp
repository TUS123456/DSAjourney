#include<bits/stdc++.h>
using namespace std;
class que{
	public:
		stack<int> sa;
		stack<int> sb;
	    int size;
	
	void rear(int data){
		sa.push(data);
	}
	int front(){
		while(!sa.empty()){
			sb.push(sa.top());
			sa.pop();
		}
		int temp = sb.top();
		sb.pop();
		return temp;
	}
	
};
main(){
	que q;
	q.rear(45);
	q.rear(34);
	cout<<"front_element"<<q.front()<<endl;
	cout<<"fornt_element"<<q.front()<<endl;
	cout<<"after whole"<<endl;
	q.rear(89);
	cout<<"fornt_element"<<q.front()<<endl;
}