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
void solve(vector<vector<int >> &ar,int row,int col){
	for(int r=0; r<row; r++){
		for(int c=0; c<r; c++){
			swap(ar[r][c],ar[c][r]);
		}
	}
}
void solution(vector<vector<int>> &arr,int row,int col){
	for(int c=0; c < col/2; c++){
		for(int r=0; r<row; r++){
			swap(arr[r][c],arr[r][col-c-1]);
		}
	}
}
main(){
	vector<vector<int> >ar={{1,2,3},{4,5,6},{7,8,9}};
	print_matrix(ar);
	int row=ar.size();
	int col=ar[0].size();
	solve(ar,row,col);
	cout<<"transpose"<<endl;
	print_matrix(ar);
	cout<<"perform opreration"<<endl;
	solution(ar,row,col);
	print_matrix(ar);
}