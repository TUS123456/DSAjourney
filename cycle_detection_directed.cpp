#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
class graph{
	public:
		unordered_map<int,list<int>> adj_list;
		
	void add_edges(int src,int destii){
		adj_list[src].push_back(destii);
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
	
	
	bool cycle_detection(int src,int parent,unordered_map<int,bool> &visited,unordered_map<int,bool> &bfsvisited){
		visited[src]=true;
		bfsvisited[src]=true;
		
		for(auto &nbr : adj_list[src]){
			if(!visited[nbr]){
				bool ans=cycle_detection(nbr,src,visited,bfsvisited);
				if(ans==true){
					return true;
					break;
				}
			}
			else if(visited[nbr]==true && bfsvisited[nbr]==true){
				return true;
			}
		}
		bfsvisited[src]=false;
		return false;
	}
};
main(){
	graph grp;
	grp.add_edges(0,1);
	grp.add_edges(0,2); 
	grp.add_edges(1,3);
	grp.add_edges(3,4);
	grp.add_edges(4,0);
	grp.add_edges(4,2);
	grp.add_edges(2,3);
	
	grp.print_graph();
	
	
	bool ans=false;
	
	unordered_map<int,bool> visited;
	unordered_map<int,bool> bfsvisited;
	ans=grp.cycle_detection(0,-1,visited,bfsvisited);
	
	if(ans==true){
		cout<<"cycle detection"<<endl;
	}
	else{
		cout<<"cycle detection"<<endl;
	}
	
	
}