#include<bits/stdc++.h>
using namespace std;
void print_vect(vector<vector<int> > &max,int &n,int &m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<max[i][j]<<" ";
		}
		cout<<endl;
	}
}
void print_vector(vector<int> &ans){
	for(auto x : ans){
		cout<<x<<" ";
	}
}
void solve(vector<vector<int> > &max,int &n,int &m,vector<int> &ans){
	int row_st=0;
	int row_end=n-1;
	int col_st=0;
	int col_end=m-1;
	
	while(row_st < row_end && col_st < col_end){
		for(int i=row_st; i<=row_end; i++){
			ans.push_back(max[row_st][i]);
		}
		row_st=row_st+1;
		for(int j=row_st; j<=row_end; j++){
			ans.push_back(max[j][col_end]);
		}
		col_end=col_end-1;
		if(row_st <= row_end){
			for(int i=col_end; i>= col_st; i--){
				ans.push_back(max[row_end][i]);
			}
		row_end=row_end-1;
		}
		
		if(col_st <= col_end){
			for(int i=row_end; i>= row_st; i--){
				ans.push_back(max[i][col_st]);
			}
		col_st=col_st+1;
		}
	}
	
	
	
}
main(){
	int n,m;
	cout<<"enter no of row and column";
	cin>>n>>m;
	vector<vector<int> > max(n,vector<int> (m));
	vector<int> ans;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int num;
			cin>>num;
			max[i][j]=num;
		}
	}
	solve(max,n,m,ans);
	print_vect(max,n,m);
	print_vector(ans);
}