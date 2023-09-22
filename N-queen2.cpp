#include<bits/stdc++.h>
#define n 8
using namespace std;
unordered_map<int,bool> left_row;
unordered_map<int,bool> upper_left_diagonal;
unordered_map<int,bool> lower_left_diagonal;
void print_board(vector<vector<char>> &board){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<board[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<endl;
}
bool queen_place_safe(vector<vector<char>> &board,int row,int col){
	if(left_row[row]==true){
		return false;
	}
	if(upper_left_diagonal[n-1+col-row]==true){
		return false;
	}
	if(lower_left_diagonal[row+col]==true){
		return false;
	}
	return true;
}
void solve(vector<vector<char>> &board,int col){
	if(col >= n){
		print_board(board);
		return;
	}
	
	for(int row=0; row < n; row++){
		if(queen_place_safe(board,row,col)){
			board[row][col]='Q';
			left_row[row]=true;
			upper_left_diagonal[n-1+col-row]=true;
			lower_left_diagonal[row+col]=true;
			
			solve(board,col+1);
			
			
			board[row][col]='.';
			left_row[row]=false;
			upper_left_diagonal[n-1+col-row]=false;
			lower_left_diagonal[row+col]=false;
		}
	}
}
main(){
	vector<vector<char>>board(n,vector<char>(n,'.'));
	int col=0;
	solve(board,col);
}