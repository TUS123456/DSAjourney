#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<char>> &arr){
	int n=arr.size();
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
bool if_is_safe_to_place_i_(vector<vector<char>> &arr,int val,int row, int col){
	int n=arr.size();
	for(int i=0; i<n; i++){
		if(arr[row][i]==val){
			return false;
		}
		if(arr[i][col]==val){
			return false;
		}
		if(arr[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==val){
			return false;
		}
	}
	return true;
}
bool solver(vector<vector<char>> &arr){
	int n=arr.size();
	for(int row=0; row<n; row++){
		for(int col=0; col<n; col++){
			if(arr[row][col]==0){
				for(int i='1'; i<='9'; i++){
					
					if(if_is_safe_to_place_i_(arr,i,row,col)){
						arr[row][col]=i;
						
						
						bool next_ans=solver(arr);
						if(next_ans==true){
							return true;
						}
						else{
							arr[row][col]='.';
				   	    }
					}
				}
			return false;
		    }
		}
	}
	return true;
}

main(){
	vector<vector<char>> arr={
	{8,3," "," ",7," "," "," ","."},
	{"6",".",".","1","9","5",".",".","."},
	{".","9","8",".",".",".",".","6","."},
	{"8",".",".",".","6",".",".",".","3"},
	{"4",".",".","8",".","3",".",".","1"},
	{"7",".",".",".","2",".",".",".","6"},
	{".","6",".",".",".",".","2","8","."},
	{".",".",".","4","1","9",".",".","5"},
	{".",".",".",".","8",".",".","7","9"}
	};
	print(arr);
	solver(arr);
    print(arr);
}