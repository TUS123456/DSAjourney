#include<bits/stdc++.h>
#include<list>
using namespace std;
void print_mat(vector<vector<int>> &mat){
	cout<<endl;
	for(int row=0; row < mat.size(); row++){
		for(int col=0; col < mat[row].size(); col++){
			cout<<mat[row][col]<<" ";
		}
		cout<<endl;
	}
}
void print_vector(vector<int> ar){
	for(int i=0; i< ar.size()-1; i++){
		cout<<ar[i]<<" ";
		
	}
	cout<<endl;
}
void solution(vector<vector<int>> &matrix){
	int row_st=0;
	int row_end=matrix.size()-1;
	int col_st=0;
	int col_end=matrix[row_end].size()-1;
	
	while(row_st < row_end && col_st < col_end){
		vector<int> arr;
		for(int i=row_st; i<=row_end; i++){
			arr.push_back(matrix[row_st][i]);
			//cout<<matrix[row_st][i]<<" ";
		}
		row_st++;
		
		for(int j=row_st; j <= row_end; j++){
			arr.push_back(matrix[j][col_end]);
			//cout<<matrix[j][col_end]<<" ";
		}
		
		col_end--;
	
        if(row_st <= row_end){
			for(int k=col_end; k>=col_st; k--){
			arr.push_back(matrix[row_end][k]);
			//cout<<matrix[row_end][k]<<" ";
		}
		}
		row_end--;
		if(col_st <= col_end){
			for(int l=row_end; l>=row_st; l--){
			arr.push_back(matrix[l][col_st]);
			//cout<<matrix[l][col_st]<<" ";
		}
		}
		col_st++;
		print_vector(arr);
	}
}
main(){
	vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8,},{10,11,12,13},{14,15,16,17}};
	print_mat(matrix);
	solution(matrix);
	
}