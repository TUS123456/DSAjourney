#include<bits/stdc++.h>
using namespace std;
vector<int> bfs_traversal(int src){
	vector<int> ans;
	map<int,bool> visited;
	queue<int> que;
	que.push(src);
	visited[src]=true;
	while(!que.empty()){
		int node=que.front();
		que.pop();
		ans.push_back(node);
	if(!visited[node]){
		que.push(adj[node]);
	}
	}
}
main(){
}