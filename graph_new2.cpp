#include<bits/stdc++.h>
#include<queue>
using namespace std;
class graph{
	public:
		unordered_map<int,list<int>> adj_list;
	
	
	void add_edges(int src,int destii,bool direction){
		adj_list[src].push_back(destii);
		if(direction==0){
			adj_list[destii].push_back(src);
		}
	}
	void print_graph(){
		for(auto node : adj_list){
			cout<<node.first<<"->";
			for(auto ptr : node.second){
				cout<<ptr<<" ";
			}
			cout<<endl;
		}
	}
	void bfs_traversal(int src,vector<int> &arr){
		queue<int> que;
		unordered_map<int,bool> visited;
		que.push(src);
		visited[src]=true;
		
		
		while(!que.empty()){
			int node =que.front();
			que.pop();
			
			
		
			cout<<node<<endl;
			arr.push_back(node);
			
			for(auto ptr : adj_list[node]){
				if(!visited[ptr]){
					que.push(ptr);
					visited[ptr]=true;
				}
			}
		} 
	}
};
main(){
	graph grp;
	grp.add_edges(1,2,0);
    grp.add_edges(2,3,0);
    grp.add_edges(3,1,0);
    //grp.print_graph();
    
    vector<int> arr;
    grp.bfs_traversal(1,arr);
    
}