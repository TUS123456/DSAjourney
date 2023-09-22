#include<bits/stdc++.h>
using namespace std;
void print_matrix(vector<vector<int>> &mat){
	for(int i=0; i<mat.size(); i++){
		for(int j=0; j<mat[0].size(); j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
void print_vec(vector<int> &ans){
	for(auto val : ans){
		cout<<val<<" ";
	}
}
void transpose_mat(vector<vector<int>> &mat,vector<vector<int>> &tran){
	for(int r=0; r<mat.size(); r++){
		for(int c=0; c<mat[0].size(); c++){
			tran[c][r]=mat[r][c];
		}
	}
}
void solve(vector<vector<int>> &tran,int row,int col){
	for(int r=0; r<(row/2); r++){
		for(int c=0; c<col; c++){
			swap(tran[r][c],tran[row-r-1][c]);
		}
	}
}
main(){
	int row,col;
	cin>>row>>col;
	vector<vector<int>> mat(row,vector<int>(col));
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			int num;
			cin>>num;
			mat[i][j]=num;
		}
	}
	vector<vector<int>> tran(row,vector<int>(col));
	print_matrix(mat);
	transpose_mat(mat,tran);
	solve(tran,row,col);
	print_matrix(tran);
	//solve(mat,row,col);
}