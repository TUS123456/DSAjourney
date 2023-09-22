#include<bits/stdc++.h>
#define n 6
using namespace std;
unordered_map<int,bool> row_check;
unordered_map<int,bool> left_upper_diagonal;
unordered_map<int,bool> left_lower_diagonal;
void print_vector(vector<vector<char>> &arr){
	for(int i=0; i<n; i++){
		for(int  j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
bool is_safe_place_queen(vector<vector<char>> &arr,int row,int col){
	if(row_check[row]==true){
		return false;
	}
	if(left_upper_diagonal[n-1+col-row]==true){
		return false;
	}
	if(left_lower_diagonal[row+col]==true){
		return false;
	}
	
	return true;
}
void solve(vector<vector<char>> &arr,int col){
	if(col >= n){
		print_vector(arr);
		return;
	}
	for(int row=0; row<n; row++){
		if(is_safe_place_queen(arr,row,col)){
			arr[row][col]='Q';
			row_check[row]=true;
			left_lower_diagonal[row+col]=true;
			left_upper_diagonal[n-1+col-row]=true;
			
			
			solve(arr,col+1);
		    
		    
		    arr[row][col]='.';
			row_check[row]=false;
			left_lower_diagonal[row+col]=false;
			left_upper_diagonal[n-1+col-row]=false;
		}
	}
}
main(){
	vector<vector<char>>arr(n,vector<char>(n,'.'));
	int col=0;
	solve(arr,col);
}