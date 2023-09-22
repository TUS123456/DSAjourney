#include<iostream>
using namespace std;
#define N 4
void print_grid(int grid[N][N]){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool it_is_valid_move(int grid[N][N],int x,int y){
	if(x>=0 && x< N && y>=0 && y < N && grid[x][y]==1){
		return true;
	}
	return false;
}
bool solve(int grid[N][N],int x,int y,int direction[N][N]){
	if(x==N-1 && y==N-1 && grid[x][y]==1){
		direction[x][y]=1;
		return true;
	}
	if(it_is_valid_move(grid,x,y)){
		direction[x][y]=1;
		if(solve(grid,x+1,y,direction)){
			return true;
		}
		if(solve(grid,x,y+1,direction)){
			return true;
		}
		direction[x][y]=0;
		return false;
	}
	return false;
}
main(){
	int grid[N][N]={ { 1, 0, 0, 0 },{ 1, 1, 0, 0 },{ 0, 0, 0, 1 },{ 1, 1, 1, 1 } };
	int direction[N][N]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	print_grid(grid);
	bool ans=solve(grid,0,0,direction);
	if(ans==false){
		cout<<"no path exist";
	}
	else{
		cout<<endl<<"direction exist"<<endl;
		print_grid(direction);
	}
}