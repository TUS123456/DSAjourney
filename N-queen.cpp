#include<bits/stdc++.h>
#define n 5
using namespace std;
void print_board(vector<vector<char>> &board){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<board[i][j]<<" ";
		}
	cout<<endl;
	}
}
bool it_is_safe_to_place_queen(vector<vector<char>> &board,int row,int col){
	int i=row;
	int j=col;
	while(j>=0){
		if(board[i][j]=='Q'){
			return false;
		}
		j--;
	}
	//back-upper
	i=row;
	j=col;
	while(i>=0 && j>=0){
		if(board[i][j]=='Q'){
			return false;
		}
		i--;
		j--;
	}
	i=row;
	j=col;
	while(i < n && j >=0){
		if(board[i][j]=='Q'){
			return false;
		}
		i++;
		j--;
	}
	return true; 
}
void solve(vector<vector<char>> &board,int col){
	if(col >= n){
		print_board(board);
		return;
	}
	for(int row=0; row < n; ++row){
		bool ans=it_is_safe_to_place_queen(board,row,col);
		if(ans){
			board[row][col]='Q';
			solve(board,col+1);
		    board[row][col]='.';
		}
	}
}
main(){
	vector<vector<char>> board(n,vector<char>(n,'.'));
	int col=0;
	int sol=0;
	solve(board,col);
}