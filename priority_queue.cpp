#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> vec{5,6,7,83,632,4};
	//it will give desecnding order 
	priority_queue<int> pq;
	for(auto val : vec){
		pq.push(val);
	}
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;
	//it will give asending order
	priority_queue<int,vector<int>,greater<int> > pqr;
	for(auto val : vec){
		pqr.push(val);
	}
	while(!pqr.empty()){
		cout<<pqr.top()<<" ";
		pqr.pop();
	}
	return 0; 
}