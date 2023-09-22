#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
class graph{
	public:
		unordered_map<int,list< pair<int,int> > > adj_list;
		
	void add_edges(int src,int dest,int weight,bool direction){
		adj_list[src].push_back({dest,weight});
		if(direction==1){
			adj_list[dest].push_back({src,weight});
		}
	}
	void print_adj(){
		for(auto ptr : adj_list){
			cout<<ptr.first<<"->";
			for(auto sec : ptr.second){
				cout<<"("<<sec.first<<","<<sec.second<<")";
			}
			cout<<endl;
		}
	}
	
	void shortestpath(int src,int dest){
		queue<int> que;
		unordered_map<int,bool> visited;
		unordered_map<int,int> parent;
		
		que.push(src);
		visited[src]=true;
		parent[src]=-1;
		
		
		while(!que.empty()){
			int nfront=que.front();
			que.pop();
			
			for(auto nbr : adj_list[nfront]){
				if(!visited[nbr.first]){
					que.push(nbr.first);
					parent[nbr.first]=nfront;
					visited[nbr.first]=true;
				}
			}
		}
		
	vector<int> ans;
	int node = dest;
	
	while(node != -1){
		ans.push_back(node);
		node=parent[node];	
    }
	cout<<endl<<"answer"<<endl;
	reverse(ans.begin(),ans.end());
	for(auto node : ans){
		cout<<node<<" ";
	}
	}
};
main(){
	graph gr;
	gr.add_edges(0,1,1,0);
    gr.add_edges(1,4,1,0);
    gr.add_edges(4,5,1,0);
    
    gr.add_edges(0,2,1,0);
    gr.add_edges(2,5,1,0);
    
    gr.add_edges(0,3,1,0);
    gr.add_edges(3,6,1,0);
    gr.add_edges(6,5,1,0);
    
    gr.print_adj();
    
    int src=0;
    int dest=5;
    
    
    gr.shortestpath(src,dest);
    
}