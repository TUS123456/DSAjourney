#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
using namespace std;
class graph{
	public:
		unordered_map<int,list<int>> adj_list;
    
    
    void addEdge(int src,int desct, bool dir){
    	adj_list[src].push_back(desct);
    	if(dir==0){
    		adj_list[desct].push_back(src);
		}
	}
	void print_graph(){
		for(auto node :adj_list){
			cout<<node.first<<"->";
			for(auto ngh :node.second){
				cout<<ngh<<" ";
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
			for(auto &ngh : adj_list[frontnode]){
				if(!visited[ngh]){
					que.push(ngh);
					visited[ngh]=true;
				}
			}
		}
	}
	
	//cycle detection using bfs traversal
   bool checkCyclicUsingBfs(int src, unordered_map<int,bool>& visited) {
		queue<int> q;
		unordered_map<int,int> parent;
		
		q.push(src);
		visited[src] = true;
		parent[src] = -1;

		while(!q.empty()) {
			int frontNode = q.front();
			q.pop();

			for(auto nbr: adj_list[frontNode]) {
				if(!visited[nbr]) {
					q.push(nbr);
					visited[nbr] = true;
					parent[nbr]=frontNode;
				}
				else if(visited[nbr] && nbr != parent[frontNode]) {
						//cycle present
						return true;
				}
			}
		}
		return false;
	}
	bool checkCyclicUsingdfs(int src,unordered_map<int,bool> &visited,int parent){
		cout<<src<<" ";
		
		
		
		for(auto nbr : adj_list[src]){
			if(!visited[nbr]){
				visited[nbr]=true;
				bool ans=checkCyclicUsingdfs(nbr,visited,src);
				if(ans==true){
					return true;
					break;
				}
			}
			else if(visited[nbr] && nbr != parent){
				return true;
			}
		}
		return false;
	}
};
main(){
	graph gr;
	int num;
	cin>>num;
	
	for(int i=0; i<num; i++){
		int src,desti;
		cin>>src>>desti;
		gr.addEdge(src,desti,0);
	}
	cout<<"graph print"<<endl;
	gr.print_graph();
	cout<<"traverse graph"<<endl;
	gr.bfs_traversal(0);
	
	
    /*bool ans = false;
	unordered_map<int, bool> visited;
	for(int i=0; i<num; i++) {
		if(!visited[i]) {
	 		ans = gr.checkCyclicUsingBfs(i,visited);
	 		if(ans == true)
	 			break;
	 	}
	}
	if(ans==true){
		cout<<"cyle"<<endl;
	}
	else{
		cout<<"not"<<endl;
	}*/
	
	// fuction call to find cycle in undirected graph using  dfs
	bool ans=false;
	unordered_map<int,bool> visited;
	for(int i=0; i<num; i++) {
		if(!visited[i]) {
	 		ans = gr.checkCyclicUsingdfs(i,visited,-1);
	 		if(ans == true)
	 			break;
	 	}
	}
	if(ans==true){
		cout<<"cyle"<<endl;
	}
	else{
		cout<<"not"<<endl;
	}
}