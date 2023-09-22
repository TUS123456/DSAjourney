#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
class graph{
	public:
		unordered_map<int,list<int>> adj_list;
		
	void add_edges(int src,int desct, bool dir){
    	adj_list[src].push_back(desct);
    	if(dir==0){
    		adj_list[desct].push_back(src);
		}
	}
	
	void print_graph(){
		for(auto &node : adj_list){
			cout<<node.first<<"->";
			for(auto &nbr : node.second){
				cout<<nbr<<" ";
			}
			cout<<endl;
		}
	}
	bool cycle_detection_dfs(int src,int parent,unordered_map<int,bool> &visited){
		visited[src]=true;
		
		for(auto &nbr : adj_list[src]){
			if(!visited[nbr]){
				bool ans=cycle_detection_dfs(nbr,src,visited);
				if(ans==true){
					return true;
					break;
				}
			}
			else if(visited[nbr]==true && nbr != parent){
				return true;
			}
		}
		return false;
	}
	bool cycle_detection_bfs(int src,unordered_map<int,bool> visited,int parent){
		cout<<src<<endl;
		
		
		for(auto nbr : adj_list[src]){
			if(!visited[nbr]){
				visited[nbr]=true;
				bool ans = cycle_detection_bfs(nbr,visited,src);
				if(ans==true){
					return true;
				}
			}
			else if(visited[nbr]==true && nbr != parent){
				return true;
			}
		}
		return false;
	}
};
main(){
	graph grp;
	grp.add_edges(0,1,0);
	grp.add_edges(0,2,0); 
	grp.add_edges(1,3,0);
	grp.add_edges(3,4,0);
	grp.add_edges(4,0,0);
	grp.add_edges(4,2,0);
	grp.add_edges(2,3,0);
	
	grp.print_graph();
	
	
	bool ans=false;
	
	unordered_map<int,bool> visited;
	bool ans1=grp.cycle_detection_dfs(0,-1,visited);
	
	if(ans1==true){
		cout<<"cycle detection"<<endl;
	}
	else{
		cout<<"cycle detection"<<endl;
	}
	
	
	visited[0]=true;
	ans=grp.cycle_detection_bfs(0,visited,-1);
	
	if(ans==true){
		cout<<"cycle detection"<<endl;
	}
	else{
		cout<<"cycle detection"<<endl;
	}
	
	
}