#include<bits/stdc++.h>
using namespace std;
void print_mat(vector<vector<int>> &mat,int row,int col){
	for(int i=0; i<=row; i++){
		for(int j=0; j<=col; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
void perform_operation(vector<vector<int>> &arr,int row,int col){
	for(int i=0; i<=arr.size(); ++i){
		cout<<arr[row][i]<<" ";
		arr[row][i]=-1;
	}
	for(int j=0; j<=arr[row].size(); j++){
		arr[j][col]=-1;
	}
}
void solution(vector<vector<int>> &arr,int row,int col){
    for(int i=0; i<=row; ++i){
		for(int j=0; j<=col; ++j){
			if(arr[i][j]==0){
				perform_operation(arr,i,j);
			}
		}
    }
}
void making_zeors(vector<vector<int>> &arr,int row,int col){
	for(int i=0; i<=row; i++){
		for(int j=0; j<=col; ++j){
			if(arr[i][j] < 0){
				arr[i][j]=0;
			}
		}
    }
}
main(){
	vector<vector<int>> mat={{0,1}};
	int row=mat.size()-1;
	int col=mat[row].size()-1;
    cout<<row<<" "<<col<<endl;
	print_mat(mat,row,col);
	solution(mat,row,col);
	print_mat(mat,row,col);
	making_zeors(mat,row,col);
	print_mat(mat,row,col);
}