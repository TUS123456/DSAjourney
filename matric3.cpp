#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &mat,int row,int col){
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
void perform_mark_row(vector<vector<int>> &arr,int row,int col,int r){
	for(int i=0; i<row; i++){
		if(arr[r][i] != 0){
			arr[r][i]=-1;
		}
	}
	//print(arr,row,col);
}
void perform_mark_col(vector<vector<int>> &arr,int row,int col,int c){
	for(int i=0; i<=col; i++){
		if(arr[i][c] != 0){
			arr[i][c]=-1;
		}
		
	}
	//print(arr,row,col);
}
void solution(vector<vector<int>> &arr,int row,int col){
	for(int r=0; r<row; r++){
		for(int c=0; c<col; c++){
			if(arr[r][c]==0){
				//cout<<arr[r][c]<<" "<<endl;
				perform_mark_row(arr,row,col,r);
				perform_mark_col(arr,row,col,c);
			}
		}
    }
    //print(arr,row,col);
    for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			if(arr[i][j]==-1){
				arr[i][j]=0;
			}
		}
    }
}

main(){
	vector<vector<int>> mat={{0,1}};
	int row=mat.size();
	int col=mat[0].size();
	//cout<<row<<" "<<col<<endl;
	solution(mat,row,col);
	print(mat,row,col);
}