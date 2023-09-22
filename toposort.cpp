#include<iostream>
#include<stack>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
	public:
	unordered_map<int,list<int> > adj_list;
	
	
	void add_edges(int src,int dstii,bool dis){
		adj_list[src].push_back(dstii);
		if(dis==0){
			adj_list[dstii].push_back(src);
		}
	}
	
	
	void print_edges(){
		for(auto node : adj_list){
			cout<<node.first<<"->";
			for(auto nbr : node.second){
				cout<<nbr<<",";
			}
			cout<<endl;
		}
	}
	
};

main(){
	graph gr;
	gr.add_edges(0,1,1);
	gr.add_edges(1,2,1);
    gr.add_edges(2,3,1);
	gr.add_edges(3,4,1);
	gr.add_edges(3,5,1);
	gr.add_edges(4,6,1);
	gr.add_edges(5,6,1);
	gr.add_edges(6,7,1);
	gr.print_edges();
		
}