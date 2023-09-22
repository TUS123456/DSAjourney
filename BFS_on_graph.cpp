#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#
using namespace std;
class graph{
	public:
		unordered_map<int,list<int> > adja_list;
		
	void add_edges(int src,int dest,bool direction){
		adja_list[src].push_back(dest);
		if(direction==0){
			adja_list[dest].push_back(src);
		}
	}
	
	void print_adj(){
		for(auto ptr: adja_list){
			cout<<ptr.first<<"->";
			for(auto adj_node : ptr.second){
				cout<<adj_node<<",";
			}
			cout<<endl;
		}
	}
	
	vector<int> traverse_bfs(int src,unordered_map<int,bool> &visited){
		queue<int> queue;
		queue.push(src);
	    visited[src]=true;
	    vector<int> ans;
	    
	    while(!queue.empty()){
	    	
			//node nikala queue se
			int node=queue.front();
			queue.pop();
			
			ans.push_back(node);
			
			for(auto ptr : adja_list[node]){
				if(!visited[ptr]){
					queue.push(ptr);
					visited[ptr]=true;
				}
			}
		}
		return ans;
	}
};
main(){
	graph gr;
	gr.add_edges(0,1,0);
	gr.add_edges(1,2,0);
	gr.add_edges(1,3,0);
	gr.add_edges(3,5,0);
	gr.add_edges(3,7,0);
	gr.add_edges(7,6,0);
	gr.add_edges(7,4,0);
	
	unordered_map<int,bool> visited;
	gr.print_adj();
	auto arr=gr.traverse_bfs(0,visited);
	
	cout<<"answer"<<endl;
	
	for(auto ptr : arr){
		cout<<ptr<<" ";
	}
	
}