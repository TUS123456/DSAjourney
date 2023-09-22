#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={5,6,2,3,1,7};
	int n=arr.size();
	stack<int> stk;
	stk.push(-1);
	cout<<arr.size()<<" ";
	vector<int> brr;
	for(int i=n-1; i>=0; i--){
		int curr=i;
		cout<<curr<<endl;
		while(stk.top() != -1 && arr[stk.top()] > arr[curr]){
			stk.pop();
		}
		if(stk.empty()){
			stk.push(-1);
		}
		if(stk.top()==-1){
			brr[i]=-1;
		}
		else{
			brr[i]=arr[stk.top()];
		}
		stk.push(curr);
    }
    for(auto &x : brr){
    	cout<<x<<" "<<endl;
	}
}