#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<vector<int>> &arr){
	for(int i=0; i<arr.size(); i++){
		for(int j=0; j<arr[i].size(); j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
void perform_operation(vector<vector<int>> &arr,int row,int col){
	for(int i=0; i<arr.size(); i++){
		arr[row][i]=0;
		arr[i][col]=0;
	}
}
void solution(vector<vector<int>> &arr){
	for(int i=0; i<arr.size(); i++){
		for(int j=0; j<arr[i].size(); j++){
			if(arr[i][j]==0){
				perform_operation(arr,i,j);
			}
		}
	}
}
main(){
	vector<vector<int>> arr={{1,1,1},{1,0,1},{1,1,1}};
	solution(arr);
	print_vec(arr);
}