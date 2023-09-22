#include<bits/stdc++.h>
using namespace std;
void print_vect(vector<vector<int> > &max){
	for(int i=0; i<max.size(); i++){
		for(int j=0; j<max[i].size(); j++){
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
void solve(vector<vector<int> > &max,vector<int> &ans){
	int row_st=0;
	int row_end=max.size()-1;
	int col_st=0;
	int col_end=max[row_end].size()-1;
	
	while(row_st < row_end && col_st < col_end){
		for(int i=row_st; i<=row_end; i++){
			ans.push_back(max[row_st][i]);
		}
		row_st++;
		for(int j=row_st; j<=row_end; j++){
			ans.push_back(max[j][col_end]); 
		}
		col_end--;
		if(row_st <= row_end){
			for(int i=col_end; i>= col_st; i--){
				ans.push_back(max[row_end][i]);
			}
		row_end--;
		}
		
		if(col_st <= col_end){
			for(int i=row_end; i>= row_st; i--){
				ans.push_back(max[i][col_st]);
			}
		col_st++;
		}
	}
}
main(){
	vector<vector<int> > max={{1,2,3,4},{5,6,7,8,},{10,11,12,13},{14,15,16,17}};
	print_vect(max);
	vector<int> ans;
	solve(max,ans);
    print_vector(ans);
}