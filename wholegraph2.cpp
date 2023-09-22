#include <iostream>
#include <list>
#include <stack>
#include <unordered_map>
#include<queue>
using namespace std;
class graph {
public:
  unordered_map<int, list<int>> adj_list;
  void add_edges(int src,int destii,bool dir){
    adj_list[src].push_back(destii);
    if(dir==0){
      adj_list[destii].push_back(src);
    }
  }

  void print_list(){
    for(auto node : adj_list){
      cout<<node.first<<"->";
      for(auto nbr : node.second){
        cout<<nbr<<",";
      }
      cout<<endl;
    }
  }
    void bfs_traversal(int src){
  	unordered_map<int,bool> visited;
  	queue<int> que;
  	que.push(src);
  	visited[src]=true;
  	
  	while(!que.empty()){
  		int frontnode=que.front();
  		que.pop();
  		
  		cout<<frontnode<<" ";
  		
  		for(auto nbr : adj_list[frontnode]){
  			if(!visited[nbr]){
  				que.push(nbr);
  				visited[nbr]=true;
			  }
		  }
	  }
    }
    void dfs_traversal(int src,unordered_map<int,bool> &visited){
    	cout<<src<<" ";
    	visited[src]=true;
    	for(auto nbr : adj_list[src]){
    		if(!visited[nbr]){
    			dfs_traversal(nbr,visited);
			}
		}
    } 
    bool bfs_cycledetection(int src){
    	
	}
};
int main(){
  graph gr;
  gr.add_edges(1,2,0);
  gr.add_edges(1,3,0);
  gr.add_edges(3,4,0);
  gr.add_edges(2,4,0);
  gr.add_edges(4,5,0);
  gr.add_edges(4,6,0);

  gr.print_list();
  
  cout<<"bfs_traversal"<<endl;
  gr.bfs_traversal(1);
  
  cout<<"dfs_traversal"<<endl;
  unordered_map<int,bool> visited;
  gr.dfs_traversal(1,visited);
  
  unordered_map<int ,int> parent;
  int src=0;
  
  return 0;
}