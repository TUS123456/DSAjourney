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
void rotate(vector<vector<int> > &matrix)
{
    for(int row=0; row < matrix.size(); row++){
        for(int col=0; col< row; col++){
            swap(matrix[row][col],matrix[col][row]);
        }
    }
}
void rotate_90(vector<vector<int>> &mat,int &row,int &col){
	for(int r=0;r<row/2;r++){
		for(int c=0;c<col;c++){
			swap(mat[r][c],mat[row-r-1][c]);
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
	cout<<"prior"<<endl;
	print_matrix(mat);
	cout<<"transpose"<<endl;
	rotate(mat);
	print_matrix(mat);
	cout<<"rotate_90"<<endl;
	rotate_90(mat,row,col);
	print_matrix(mat);
}