#include<iostream>
#include<queue>
using namespace std;
main(){
	queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.push(60);
    que.push(70);
    que.push(80);
    que.push(90);
    que.push(100);
    
    while(!que.empty()){
    	cout<<que.front()<<endl;
    	que.pop();
	}
}