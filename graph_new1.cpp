#include<bits/stdc++.h>
using namespace std;
class graph{
	public:
		unordered_map<int,list<int>> adj_list;
	
	
	void add_edges(int src,int destii,bool direction){
		adj_list[src].push_back(destii);
		if(direction == 0){
			adj_list[destii].push_back(src);
		}
	}
	void print_edges(){
		for(auto node : adj_list){
			cout<<node.first<<"->";
			for(auto lis : node.second){
				cout<<lis<<" ";
			}
			cout<<endl;
		}	
	}
};
main(){
	graph gr;
	gr.add_edges(0,1,1);
	gr.add_edges(0,2,1);
	gr.add_edges(1,2,1);
		
	gr.print_edges();	
}