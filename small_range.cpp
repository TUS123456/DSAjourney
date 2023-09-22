#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int value;
	int row;
	int col;
	
	node(int value,int row,int col){
		this->value=value;
		this->row=row;
		this->col=col;
	}	
};

class compare{
	public:
		bool operator()(node *a,node *b){
			return a->value > b->value;
		}
};
vector<int> smallest_range_covring(vector<vector<int>> &nums){
	int minii=INT_MAX;
	int maxii=INT_MIN;
	
	
	int k=nums.size();
	
	priority_queue<node*,vector<node*>,compare> pq;
	
	for(int i=0; i<k; i++){
		int ele=nums[i][0];
		node *nde=new node(ele,i,0);
		pq.push(nde);
		minii=min(minii,ele);
		maxii=max(maxii,ele);
	}
	
	int startans=minii;
	int endans=maxii;
	
	while(!pq.empty()){
		node *temp=pq.top();
		pq.pop();
		
		int data=temp->value;
		int currrow=temp->row;
		int currcol=temp->col;
		
		
		minii=data;
		
		if(maxii - minii < endans - startans){
			startans=minii;
			endans=maxii;
		}
		if(currcol +1 < nums[currrow].size()){
			int elee=nums[currrow][currcol+1];
			maxii=max(maxii,elee);
			node *newnode=new node(elee,currrow,currcol+1);
			pq.push(newnode);
		}
		else{
			break;
		}
	}
	
	return {startans,endans};
}
main(){
	vector<vector<int>> nums={{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
	vector<int> ans=smallest_range_covring(nums);
	for(auto ptr : ans){
		cout<<ptr<<endl;
	}
}