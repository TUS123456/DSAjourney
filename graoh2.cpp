#include<bits/stdc++.h>
using namespace std;
class graph{
	public:
	unordered_map<int,list<int> > adjlist;
	void add_edges(int n1,int n2,bool dir){
		adjlist[n1].push_back(n2);
		if(dir==0){
			adjlist[n2].push_back(n1);
		}
	}
	void print_map(){
		for(auto i : adjlist){
			cout<<i.first<<" "<<"->";
			for(auto j : i.second){
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
	void bfs_traversal(int src){
		vector<int> ans;
		queue<int> que;
		map<int,bool> visited;
		que.push(src);
		visited[src]=true;
		
		while(!que.empty()){
			int node=que.front();
			que.pop();
		   
		    cout<<node<<" ";
			//ans.push_back(node);
		    
		for(auto it : adjlist[node]){
			if(!visited[it]){
				que.push(it);
				visited[it]=true;
			}
		}   
		}
		//return ans;
	}
	void dfs_traversal(int src,unordered_map<int,bool> &visited2){
		cout<<src<<" ";
		visited2[src]=true;
		for(auto node : adjlist[src]){
			if(!visited2[node]){
				visited2[node]=true;
				dfs_traversal(node,visited2);
			}
		}
		
	}
};
main(){
	graph gr;
	gr.add_edges(0,1,0);
    gr.add_edges(1,2,0);
	gr.add_edges(1,3,0);
	gr.add_edges(3,4,0);
	gr.add_edges(4,6,0);
	gr.add_edges(3,5,0);
		
	unordered_map<int,bool> visited2;
	gr.print_map();
	cout<<"bfs_traversal"<<endl;
	gr.bfs_traversal(0);
	cout<<endl;
    cout<<"dfs_traversal"<<endl;
    gr.dfs_traversal(0,visited2);
}