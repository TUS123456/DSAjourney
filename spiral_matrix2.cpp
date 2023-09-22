//spiral_print
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
void solve(vector<vector<int>> &arr,int &row,int &col,vector<int> &ans)
main(){
	int n,m;
	cout<<"enter row and column";
	cin>>n>>m;
	vector<vector<int>> arr(n,vector<int> (m));
	vector<int> ans;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int num;
			cin>>num;
			arr[i][j]=num;
		}
	}
	print_mat(arr);
	solve(arr,n,m,ans);
	print_vec(ans);
	

}