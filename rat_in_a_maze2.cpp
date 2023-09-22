#include<bits/stdc++.h>
#define n 3
using namespace std;
void pritn_grid(vector<vector<int>> &maze){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<maze[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool is_safe_movement(vector<vector<int> > &maze,int row,int col,int srcx,int srcy,vector<vector<bool>> &direction){
	if(srcx >=0 && srcx < row && srcy >= 0 && srcy < col && maze[srcx][srcy]==1 && direction[srcx][srcy]==false){
		return true;
	}
	return false;
}
void solve(vector<vector<int> > &maze,int row,int col,int srcx,int srcy,vector<string> &path, string output,vector<vector<bool> > &direction){
	if(srcx==row-1 && srcy==col-1 && maze[srcx][srcy]==1){
		path.push_back(output);
		return;
	}
	//right-move
	if(is_safe_movement(maze,row,col,srcx,srcy+1,direction)){
		direction[srcx][srcy]=1;
		solve(maze,row,col,srcx,srcy+1,path,output+'R',direction);
		direction[srcx][srcy]=0;
	}
	//left-move
	if(is_safe_movement(maze,row,col,srcx,srcy-1,direction)){
		direction[srcx][srcy]=1;
		solve(maze,row,col,srcx,srcy-1,path,output+'L',direction);
		direction[srcx][srcy]=0;
	}
	//up-move
	if(is_safe_movement(maze,row,col,srcx-1,srcy,direction)){
		direction[srcx][srcy]=1;
		solve(maze,row,col,srcx-1,srcy,path,output+'U',direction);
		direction[srcx][srcy]=0;
	}
	//down-move
	if(is_safe_movement(maze,row,col,srcx+1,srcy,direction)){
		direction[srcx][srcy]=1;
		solve(maze,row,col,srcx+1,srcy,path,output+'D',direction);
		direction[srcx][srcy]=0;
	}
}
main(){
	vector<vector<bool> > direction(n,vector<bool> ( n, false));
	vector<vector<int> > maze={{1,1,1},{1,1,1},{1,1,1}};
	pritn_grid(maze);
	vector<string> path;
	
	string output="";
	solve(maze,n,n,0,0,path,output,direction);
	for(auto val : path){
		cout<<val<<" ";
	}
	
}