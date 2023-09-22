#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
	public:
		unordered_map<int,list<int>> adj_list;
	
	void add_edge(int src,int destii,bool direction){
		adj_list[src].push_back(destii);
		
		if(direction == 0){
			adj_list[destii].push_back(src);
		}
	}
	void print_graph(){
		for(auto node : adj_list){
			cout<<node.first<<"->";			
			for(auto ptr : node.second){
				cout<<ptr<<",";
			}
			cout<<endl;
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
		g.add_edge(u,v,dir);
	}
	g.print_graph();
}