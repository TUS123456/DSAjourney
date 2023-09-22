#include<bits/stdc++.h>
#include<queue>
using namespace std;
void print(queue<int> dq){
	while(!dq.empty()){
		cout<<dq.front()<<" ";
		dq.pop();
	}
}
void QueueReverse(queue<int> &dq){
	while(dq.empty()){
		return;
	}
	int temp=dq.front();
	dq.pop();
	QueueReverse(dq);
	dq.push(temp);
}

main(){
	queue<int> dq;
	dq.push(10);
	dq.push(20);
    dq.push(30);
    dq.push(40);
    dq.push(50);
    print(dq);
    QueueReverse(dq);
    cout<<endl;
    print(dq);
}