#include<iostream>
#include<queue>
using namespace std;
main(){
	int sum=0;
    queue<int> qu;
	qu.push(5);
	qu.push(4);
	qu.push(3);
	qu.push(2);
	qu.push(1);
    while(!qu.empty()){
    	sum=sum+qu.front();
    	qu.pop();
	}
	cout<<"sum is"<<" "<<sum;
	
}
