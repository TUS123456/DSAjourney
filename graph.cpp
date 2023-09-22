#include<bits/stdc++.h>
using namespace std;
class graph{
	public:
	unordered_map<int ,list<int> > adj;
	void add_edges(int start,int end,bool dir){
		adj[start].push_back(end);
		if(dir==0){
			adj[end].push_back(start);
		}
	}
	void print_map_adj_list(){
		for(auto i : adj){
			cout<<i.first<<"->";
			for(auto j : i.second){
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
	void bfs_traversal(int src,auto &arr){
		queue<int> que;
		unordered_map<int,bool> visited;
		que.push(src);
		visited[src]=true;
		
		
		while(!que.empty()){
			int node =que.front();
			que.pop();
			
			cout<<node<<endl;
			//arr.push_back(node);
			
			for(auto ptr : adj[node]){
				que.push(ptr);
			}
		} 
	}	
};
main(){
	graph g;
	int n;
	cout<<"enter number node";
	cin>>n;
	
	int m;
	cout<<"enter number edges";
	cin>>m;
	
	
	for(int i=0; i<m; i++){
		int u;
		int v;
		bool dir;
		cout<<"enter both node value";
		cin>>u>>v;
		cout<<"enter direction";
		cin>>dir;
		g.add_edges(u,v,dir);
	}
	vector<int> arr;
	
	
	g.print_map_adj_list();
	
	g.bfs_traversal(0,arr);
	
	
	for(auto ptr : arr){
		cout<<ptr<<" ";
	}
	
}