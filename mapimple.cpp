#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;
class graph{
	public:
		unordered_map<int,list<int>> adj_list;
	
	
	void add_edges(int src,int destii,int direct){
		adj_list[src].push_back(destii);
		if(direct==0){
			adj_list[destii].push_back(src);
		}
	}
	void print_graph(){
		for(auto &node : adj_list){
			cout<<node.first<<"->";
			for(auto &lst : node.second){
				cout<<lst<<" ";
			}
			cout<<endl;
		}
	}
	void BFS(int src){
		queue<int> que;
		unordered_map<int,bool> visited;
		que.push(src);
		visited[src]=true;
		
		while(!que.empty()){
			int front= que.front();
			que.pop();
			
			
			cout<<front<<" ";
			
			for(auto &nbr : adj_list[front]){
				if(!visited[nbr]){
					que.push(nbr);
					visited[nbr]=true;
				}
			}
		}
	}
	void DFS(int src,unordered_map<int,bool> &visited){
		cout<<src<<" ";
		visited[src]=true;
		for(auto &nbr : adj_list[src]){
			if(!visited[nbr]){
				DFS(nbr,visited);
			}
		}
	}
}; 
main(){
	graph gr;
	
	int num;
	cin>>num;
	
	
	for(int i=0; i<=num; i++){
		int src,destii;
		cin>>src>>destii;
		
		gr.add_edges(src,destii,0); 
	}
	
	gr.print_graph();
	cout<<endl<<"BFS"<<endl;
	gr.BFS(0);
	cout<<"DFS"<<endl;
	unordered_map<int,bool> visited;
	int src=0;
	visited[src]=true;
	gr.DFS(src,visited);
}