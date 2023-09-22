#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
void print(queue<int> dq){
	while(!dq.empty()){
		cout<<dq.front()<<" ";
		dq.pop();
	}
}
void slidding_window(vector<int> &array,int slide_size){
	queue<int> dq;
	for(int i=0; i<slide_size; i++){
		if(array[i] < 0){
			dq.push(i);
		}
	}
	for(int i=slide_size; i<array.size(); i++){
		if(dq.empty()){
			cout<<"0"<<" ";
		}
		else{
			cout<<array[dq.front()]<<" ";
		}
		while(!dq.empty() && i-dq.front() >= slide_size){
			dq.pop();
		}
		if(array[i] < 0){
			dq.push(i);
		}
	}
	    if(dq.empty()){
			cout<<"0"<<" ";
		}
		else{
			cout<<array[dq.front()]<<" ";
	    }
}
main(){
	vector<int> array;
	array.push_back(1);
	array.push_back(-1);
	cout<<array.size();
	//slidding_window(array,3);
}