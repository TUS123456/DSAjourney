#include<bits/stdc++.h>
using namespace std;
class graph{
	public:
		unordered_map<int,vector<pair<int,int> > > adj;
		void create_adj(int f_node,int S_node,int dis,bool dir){
			pair<int,int> node_dis_info;
			node_dis_info.first=S_node;
			node_dis_info.second=dis;
			
			adj[f_node].push_back(node_dis_info);
			
			if(dir==0){
				node_dis_info.first=f_node;
				adj[S_node].push_back(node_dis_info);
	       }
        }
	    void print_adj(void)
		{
			for(auto i : adj){
				cout<<i.first<<"->";
				for(auto j : i.second){
					cout<<"("<<"node val"<<j.first<<"."<<"distance b/w node"<<j.second<<")"<<",";
				}
				cout<<endl;
			}
		}
		vector<int> bfs_traversal(int src){
			
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
		int dis;
		cout<<"enter distance between these two node";
		cin>>dis;
		cout<<"enter direction";
		cin>>dir;
		g.create_adj(u,v,dis,dir);
	}
	g.print_adj();
}