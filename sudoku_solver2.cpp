#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &arr){
	int n=arr.size();
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool solver(vector<vector<int>> &arr){
	int n=arr.size();
	for(int row=0; row<n; row++){
		for(int col=0; col<n; col++){
			if(arr[row][col]==0)
		}
	}
}
main(){
	vector<vector<int>> arr={{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0}};
	solver(arr);
	print(arr);
}